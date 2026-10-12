#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include "../../lib/it.hpp"

// change to the desired file path and name
std::string filePath = "data.txt";

enum enMainMenu
{ eViewAll = 1, eAdd = 2, eDelete = 3, eEdit = 4, eFind = 5, eExit = 6 };

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
void recordsToFile(const std::vector <std::string> &records, const std::string &filePath);
std::vector <std::string> dataToRecords(const std::vector <stClientData> &vData);

void viewFileData(const std::string &filepath);
bool addClientToFile(const std::string &filepath);
bool updateSpecificAccount(const std::string &filepath);
bool deleteSpecificAccount(const std::string &filepath);
bool printSpecificAccount(const std::string &filepath);

bool runMenuOption(enMainMenu option);

void startBank();

// Low Level
stClientData recordToData(const std::string& record, const std::string &separator = "/|\\");
std::string dataToRecord(const stClientData &data, const std::string &separator = "/|\\");
bool findAccountInDatas(const std::vector <stClientData> &vData, stClientData &account, const std::string &accNum);
std::string readAccountNum();

std::vector <stClientData> afterDelete(const std::vector <stClientData> &vData);
bool overwriteEditedAccount(const stClientData &newData, std::vector <stClientData> &vData);
stClientData readUpdatedAccount(stClientData oldData);
stClientData readClientData();
bool appendRecordToFile(const std::string& record, const std::string &filepath);
bool markToDelete(const std::string &accNum, std::vector <stClientData> &vData);

void accountNotFound(const std::string &accNum);
bool confirmAccountToEdit();
bool confirmAccountDelete();

enMainMenu readMainMenuOption();

void sysPause();


// UI/UX
void clearScreen();
void printFooter();
void printLine(const stClientData &data);
void printLines(const std::vector <stClientData> &vData);
void printHeader(int clientNum);

void printTable(const stClientData &data);
void printUpdateStatus(bool isSuccessful);
void printMainMenu();

int main()
{
    startBank();

    return 0;
}

void startBank()
{
    enMainMenu option;
    do
    {
        printMainMenu();

        option = readMainMenuOption();
        
        clearScreen();

        if (runMenuOption(option))
        {
            std::cout << "\n\nDone! Press Any Key To Return To Main Menu.";
            sysPause();
        }

        else
        {
            std::cout << "\n\nError! Press Any Key To Return To Main Menu.";
            sysPause();
        }
    }
    while (option != enMainMenu::eExit);
    
}

void viewFileData(const std::string &filepath)
{
    std::vector <stClientData> vData = recordsToData(fileToRecords(filepath));

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

bool updateSpecificAccount(const std::string &filepath)
{
    stClientData account;

    std::vector <stClientData> vData = recordsToData(fileToRecords(filepath));

    std::string accNum = readAccountNum();

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
        

        recordsToFile(dataToRecords(vData), filepath);

        return true;
    }

    return false;
}

bool deleteSpecificAccount(const std::string &filepath)
{
    stClientData account;

    std::vector <stClientData> vData = recordsToData(fileToRecords(filepath));

    std::string accNum = readAccountNum();
    
    if (!findAccountInDatas(vData, account, accNum))
    {
        accountNotFound(accNum);
        return false;
    }

    printTable(account);

    if (confirmAccountDelete())
    {
        markToDelete(accNum, vData);

        recordsToFile(dataToRecords(afterDelete(vData)), filepath);

        return true;
    }

    return false;
}

bool printSpecificAccount(const std::string &filepath)
{
    stClientData account;
    
    std::vector <stClientData> vData = recordsToData(fileToRecords(filepath));

    std::string accNum = readAccountNum();

    if (!findAccountInDatas(vData, account, accNum))
    {
        accountNotFound(accNum);
        return false;
    }

    printTable(account);

    return true;
}

bool runMenuOption(enMainMenu option)
{
    switch (option)
    {
    case enMainMenu::eViewAll:
        {
            viewFileData(filePath);
            return true;
        }
    
    case enMainMenu::eAdd:
        {
            return addClientToFile(filePath);
        }

    case enMainMenu::eDelete:
        {
            return deleteSpecificAccount(filePath);
        }

    case enMainMenu::eEdit:
        {
            return updateSpecificAccount(filePath);
        }
    
    case enMainMenu::eFind:
        {
            return printSpecificAccount(filePath);
        }

    case enMainMenu::eExit:
        {
            return true;
        }
    
    default:
        {
            return true;
        }
    }

    return true;
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

void recordsToFile(const std::vector <std::string> &records, const std::string &filepath)
{
    std::ofstream file(filepath);
    
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

enMainMenu readMainMenuOption()
{
    return static_cast<enMainMenu>(it008e::IOs::readPositiveNum("\nEnter Main Menu Option (1 -> 6): "));
}

bool addClientToFile(const std::string &filepath)
{
    stClientData data = readClientData();

    std::vector <stClientData> vData = recordsToData(fileToRecords(filepath));
    
    if (findAccountInDatas(vData, data, data.accNum))
    {
        std::cout << "\n\n\tError! Account Number Already Exists.";
        
        return false;
    }
        
    return appendRecordToFile(dataToRecord(data), filepath);
}

stClientData readClientData()
{
    stClientData data;
    
    std::cout << "\nEnter Client Data:";

    data.accNum = it008e::IOs::readString("\n\nEnter Account Number: ");
    data.pin = it008e::IOs::readString("Enter pin: ");
    data.name = it008e::IOs::readString("Enter Name: ");
    data.phone = it008e::IOs::readString("Enter Phone Number: ");
    data.balance = it008e::IOs::readNum("Enter Account Balance: ");

    return data;
}

bool appendRecordToFile(const std::string& record, const std::string &filepath)
{
    std::ofstream file(filepath, std::ios::app);

    if (!file.is_open())
    {
        return false;
    }
    
    file << record << std::endl;    
    
    return true;
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

void clearScreen()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void sysPause()
{
    std::cin.get();
}

void printMainMenu()
{
    clearScreen();
    std::cout << std::right << "\n" << std::setfill('=') << std::setw(52) << "" << std::setfill(' ')
              << "\n" << std::setw(31) << "Main Menu" // 52 -> 26 -> 13 : the line (length/half/quarter) + the following string length
              << "\n" << std::setfill('=') << std::setw(52) << "" << std::setfill(' ')
              
              << "\n" << std::setw(27) << "[1] Show Client List"
              << "\n" << std::setw(21) << "[2] Add Client"
              << "\n" << std::setw(24) << "[3] Delete Client"
              << "\n" << std::setw(29) << "[4] Update Client Data"
              << "\n" << std::setw(22) << "[5] Find Client"
              << "\n" << std::setw(15) << "[6] Exit"
              << "\n" << std::setfill('=') << std::setw(105) << "" << std::setfill(' ');
}
