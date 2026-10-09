#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include "../../lib/it.hpp"

/*
    1. find account and mark it to delete
    2. save all non marked accounts to temp vector
    3. write temp vector to the file
    4. reload the vdata vector from file
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

bool deleteSpecificAccount(const std::string &accNum, std::vector <stClientData> &vData);
std::vector <stClientData> afterDelete(const std::vector <stClientData> &vData);

// Low Level
stClientData recordToData(const std::string& record, const std::string &separator = "/|\\");
std::string dataToRecord(const stClientData &data, const std::string &separator = "/|\\");
bool findAccountInDatas(const std::vector <stClientData> &vData, stClientData &account, const std::string &accNum);
std::string readAccountNum();
void accountNotFound(const std::string &accNum);
bool confirmAccountDelete();
bool markToDelete(const std::string &accNum, std::vector <stClientData> &vData);


// UI/UX
void printFooter();
void printLine(const stClientData &data);
void printLines(const std::vector <stClientData> &vData);
void printHeader(int clientNum);

void printTable(const std::vector <stClientData> &vData);
void printTable(const stClientData &data);


int main()
{
    std::vector <stClientData> vData = recordsToData(fileToRecords("data.txt"));
    
    std::string accNum = readAccountNum();

    deleteSpecificAccount(accNum, vData);

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

bool deleteSpecificAccount(const std::string &accNum, std::vector <stClientData> &vData)
{
    stClientData account;
    
    if (!findAccountInDatas(vData, account, accNum))
    {
        accountNotFound(accNum);
        return false;
    }

    printTable(account);

    if (confirmAccountDelete())
    {
        markToDelete(accNum, vData);

        recordsToFile(dataToRecords(afterDelete(vData)), "data.txt");

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

std::vector <stClientData> afterDelete(const std::vector <stClientData> &vData)
{
    std::vector <stClientData> vTemp;

    for (const stClientData &data : vData)
    {
        if (data.toDelete)
        {
            continue;
        }
        
        vTemp.push_back(data);
    }
    
    return vTemp;
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

bool markToDelete(const std::string &accNum, std::vector <stClientData> &vData)
{
    for (stClientData &data : vData)
    {
        if (accNum == data.accNum)
        {
            data.toDelete = true;
            return true;
        }
    }

    return false;
}

std::string readAccountNum()
{
    return it008e::IOs::readString("\nEnter Account Number To Find: ");
}

void accountNotFound(const std::string &accNum)
{
    std::cout << "\n Error! Account Number (" << accNum << ") Not Found.";
}

bool confirmAccountDelete()
{
    char isDelete = 'n';

    isDelete = it008e::IOs::readChar("\n\tAre You Sure You Want To Delete? (Y/n): ");

    return (tolower(isDelete) == 'y');
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