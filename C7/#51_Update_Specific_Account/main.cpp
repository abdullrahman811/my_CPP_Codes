#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cctype>
#include "../../lib/it.hpp"

/*
    1. find account in vdata findaccountindatas
    2. read new account details in temp readupdatedaccount
    3. overwrite old marked one with the temp one confirmaccounttoedit overwriteEditedAccount
    4. write the new vdata to file updatespecificaccount
*/

struct stClientData
{
    std::string    accNum  = "";
    
    std::string    pin     = "";

    std::string    name    = "";
    
    std::string    phone   = "";
    
    int            balance = 0;

    bool           toDelete= false;
};

// High Level
std::vector <std::string> fileToRecords(const std::string &filepath);
std::vector <stClientData> recordsToData(const std::vector <std::string> &vRecords);

std::vector <std::string> dataToRecords(const std::vector <stClientData> &vData);
void recordsToFile(const std::vector <std::string> &records, const std::string &filePath);

bool updateSpecificAccount(const std::string &accNum, std::vector <stClientData> &vData);

// Low Level
stClientData recordToData(const std::string& record, const std::string &separator = "/|\\");
std::string dataToRecord(const stClientData &data, const std::string &separator = "/|\\");
bool findAccountInDatas(const std::vector <stClientData> &vData, stClientData &account, const std::string &accNum);
bool overwriteEditedAccount(const stClientData &newData, std::vector <stClientData> &vData);
stClientData readUpdatedAccount(stClientData oldData);
std::string readAccountNum();

void accountNotFound(const std::string &accNum);
bool confirmAccountToEdit();


// UI/UX
void printFooter();
void printLine(const stClientData &data);
void printLines(const std::vector <stClientData> &vData);
void printHeader(int clientNum);

void printTable(const std::vector <stClientData> &vData);
void printTable(const stClientData &data);
void printUpdateStatus(bool isSuccessful);


int main()
{
    std::vector <stClientData> vData = recordsToData(fileToRecords("data.txt"));
    
    std::string accNum = readAccountNum();

    printUpdateStatus(updateSpecificAccount(accNum, vData));

    return 0;
}

void printTable(const std::vector <stClientData> &vData)
{
    printHeader(vData.size());
    printLines(vData);
    printFooter();
}

void printTable(const stClientData &data)
{
    printHeader(1);
    printLine(data);
    printFooter();
}

bool updateSpecificAccount(const std::string &accNum, std::vector <stClientData> &vData)
{
    stClientData account;
    
    if (!findAccountInDatas(vData, account, accNum))
    {
        accountNotFound(accNum);
        return false;
    }

    printTable(account);

    if (confirmAccountToEdit())
    {
        account = readUpdatedAccount(account);

        if (!overwriteEditedAccount(account, vData))
        {
            std::cout << "\n Error! Couldn't Update Account.";
            return false;
        }
        

        recordsToFile(dataToRecords(vData), "data.txt");

        // Sync From Database
        vData = recordsToData(fileToRecords("data.txt"));

        return true;
    }

    return false;
}

std::vector <std::string> fileToRecords(const std::string &filepath)
{
    std::ifstream file(filepath);

    std::vector <std::string> vRecords;

    std::string str = "";

    while (std::getline(file, str))
    {
        vRecords.push_back(str);
    }
    
    return vRecords;
}

void recordsToFile(const std::vector <std::string> &records, const std::string &filePath)
{
    std::ofstream file(filePath);
    
    for (const std::string &record : records)
    {
        file << record << "\n";
    }
}

std::vector <stClientData> recordsToData(const std::vector <std::string> &vRecords)
{
    std::vector <stClientData> vData;

    for (const std::string &record : vRecords)
    {
        vData.push_back(recordToData(record));
    }
    
    return vData;
}

stClientData recordToData(const std::string &record, const std::string &separator)
{
    std::vector <std::string> vData = it008e::Strings::splitString(record, separator);

    stClientData data;

    data.accNum = vData[0];
    data.pin = vData[1];
    data.name = vData[2];
    data.phone = vData[3];
    data.balance = std::stoi(vData[4]);
    
    return data;
}

std::vector <std::string> dataToRecords(const std::vector <stClientData> &vData)
{
    std::vector <std::string> vRecords;

    for (const stClientData &data : vData)
    {
        vRecords.push_back(dataToRecord(data));
    }
    
    return vRecords;
}

std::string dataToRecord(const stClientData &data, const std::string &separator)
{
    std::string record = "";

    record += data.accNum + separator;
    record += data.pin + separator;
    record += data.name + separator;
    record += data.phone + separator;
    record += std::to_string(data.balance);

    return record;
}

bool findAccountInDatas(const std::vector <stClientData> &vData, stClientData &account, const std::string &accNum)
{
    for (const stClientData &data : vData)
    {
        if (accNum == data.accNum)
        {
            account = data;
            return true;
        }
    }

    return false;
}

std::string readAccountNum()
{
    return it008e::IOs::readString("\nEnter Account Number To Find: ");
}

bool overwriteEditedAccount(const stClientData &newData, std::vector <stClientData> &vData)
{
    for (stClientData &data : vData)
    {
        if (newData.accNum == data.accNum)
        {
            data = newData;
            return true;
        }
    }
    
    return false;
}

stClientData readUpdatedAccount(stClientData oldData)
{
    oldData.pin = it008e::IOs::readString("\nEnter pin: ");
    oldData.name = it008e::IOs::readString("\nEnter Name: ");
    oldData.phone = it008e::IOs::readString("\nEnter Phone Number: ");
    oldData.balance = it008e::IOs::readNum("\nEnter Account Balance: ");

    return oldData;
}

void accountNotFound(const std::string &accNum)
{
    std::cout << "\n Error! Account Number (" << accNum << ") Not Found.";
}

void printUpdateStatus(bool isSuccessful)
{
    if (isSuccessful)
    {
        std::cout << it008e::Strings::toTitleCase("\n updated successfully!");
        return;
    }
    
    std::cout << it008e::Strings::toTitleCase("\n error! failed to update.");
}

bool confirmAccountToEdit()
{
    char isEdit = 'n';

    isEdit = it008e::IOs::readChar("\n\tAre You Sure You Want To Edit? (Y/n): ");

    return (tolower(isEdit) == 'y');
}

void printHeader(int clientNum)
{
    std::cout << std::setfill(' ') << std::setw(52) << "Client List (" << clientNum << ") Client(s)"
              << "\n" << std::setfill('_') << std::setw(105) << "" << std::setfill(' ')
              << "\n|  Account Number  |  PIN Code  |  Client Name                            |  Phone          |  Balance  |"
              << "\n" << std::setfill('_') << std::setw(105) << "" << std::setfill(' ');
}

void printLines(const std::vector <stClientData> &vData)
{
    for (const stClientData &data : vData)
    {
        printLine(data);
    }
}

void printLine(const stClientData &data)
{
    std::cout << std::left << "\n"
              << "|  " << std::setw(16) << data.accNum 
              << "|  " << std::setw(10) << data.pin 
              << "|  " << std::setw(39) << data.name 
              << "|  " << std::setw(15) << data.phone 
              << "|  " << std::setw(9) << data.balance 
              << "|";
}

void printFooter()
{
    std::cout << std::endl << "\n" << std::setfill('_') << std::setw(105) << "" << std::setfill(' ');
}