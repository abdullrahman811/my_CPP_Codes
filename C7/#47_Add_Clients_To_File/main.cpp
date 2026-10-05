#include <iostream>
#include <string>
#include <fstream>
#include "../../lib/it.hpp"

struct stClientData
{
    std::string    accNum  = "";
    
    unsigned short pin     = 0;

    std::string    name    = "";
    
    std::string    phone   = "";
    
    int            balance = 0;
};

// __Noise__

void readClients();
bool addClientToFile(const std::string &filepath);
stClientData readClientData();
std::string dataToRecord(const stClientData &data, const std::string& seperator = "/|\\");
bool appendRecordToFile(const std::string& record, const std::string &filepath);
void clearScreen();
void printIsSuccess(bool isDone);

int main()
{
    readClients();

    return 0;
}

void readClients()
{
    char isAgain = ' ';
    
    do
    {
        clearScreen();

        bool isDone = addClientToFile("data.txt");

        printIsSuccess(isDone);
        
        isAgain = it008e::IOs::readChar("\n\tEnter Another CLient (Y/n)? ");
    }
    while (std::tolower(isAgain) == 'y');
}

bool addClientToFile(const std::string &filepath)
{
    stClientData data = readClientData();
        
    return appendRecordToFile(dataToRecord(data), filepath);
}

stClientData readClientData()
{
    stClientData data;
    
    std::cout << "\nEnter Client Data:";

    data.accNum = it008e::IOs::readString("\n\nEnter Account Number: ");
    data.pin = it008e::IOs::readNum("Enter pin: ");
    data.name = it008e::IOs::readString("Enter Name: ");
    data.phone = it008e::IOs::readString("Enter Phone Number: ");
    data.balance = it008e::IOs::readNum("Enter Account Balance: ");

    return data;
}

std::string dataToRecord(const stClientData &data, const std::string& seperator)
{
    std::string record = "";

    record += data.accNum + seperator;
    record += std::to_string(data.pin) + seperator;
    record += data.name + seperator;
    record += data.phone + seperator;
    record += std::to_string(data.balance);

    return record;
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

void clearScreen()
{
    system("clear");
}

void printIsSuccess(bool isDone)
{
    if (isDone)
    {
        std::cout << "\nDone!";
    }

    else
    {
        std::cout << "\nError!";
    }
}