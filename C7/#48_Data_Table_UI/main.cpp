#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include "../../lib/it.hpp"

struct stClientData
{
    std::string    accNum  = "";
    
    std::string    pin     = "";

    std::string    name    = "";
    
    std::string    phone   = "";
    
    int            balance = 0;
};

std::vector <std::string> fileToRecords(const std::string &filepath);
std::vector <stClientData> recordsToData(const std::vector <std::string> &vRecords);

stClientData recordToData(const std::string& record, const std::string &seperator = "/|\\");

void printFooter();
void printLines(const std::vector <stClientData> &vData);
void printHeader(int clientNum);

void printTable(const std::vector <stClientData> &vData);


int main()
{
    std::vector <stClientData> vData = recordsToData(fileToRecords("data.txt"));

    printTable(vData);

    return 0;
}

void printTable(const std::vector <stClientData> &vData)
{
    printHeader(vData.size());
    printLines(vData);
    printFooter();
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

std::vector <stClientData> recordsToData(const std::vector <std::string> &vRecords)
{
    std::vector <stClientData> vData;

    for (const std::string &record : vRecords)
    {
        vData.push_back(recordToData(record));
    }
    
    return vData;
}

stClientData recordToData(const std::string &record, const std::string &seperator)
{
    std::vector <std::string> vData = it008e::Strings::splitString(record, seperator);

    stClientData data;

    data.accNum = vData[0];
    data.pin = vData[1];
    data.name = vData[2];
    data.phone = vData[3];
    data.balance = std::stoi(vData[4]);
    
    return data;
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
        std::cout << std::left << "\n"
                  << "|  " << std::setw(16) << data.accNum 
                  << "|  " << std::setw(10) << data.pin 
                  << "|  " << std::setw(39) << data.name 
                  << "|  " << std::setw(15) << data.phone 
                  << "|  " << std::setw(9) << data.balance 
                  << "|";
    }
}

void printFooter()
{
    std::cout << std::endl << "\n" << std::setfill('_') << std::setw(105) << "" << std::setfill(' ');
}