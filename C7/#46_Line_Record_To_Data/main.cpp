#include <iostream>
#include <string>
#include <vector>
#include "../../lib/it.hpp"

struct stClientData
{
    std::string    accNum  = "838A";
    
    unsigned short pin     = 1234;

    std::string    name    = "Bakri Sasa";
    
    std::string    phone   = "0987654321";
    
    int            balance = 100;
};

std::string dataToRecord(const stClientData &data, std::string seperator = "/|\\")
{
    std::string record = "";

    record += data.accNum + seperator;
    record += std::to_string(data.pin) + seperator;
    record += data.name + seperator;
    record += data.phone + seperator;
    record += std::to_string(data.balance);

    return record;
}

stClientData recordToData(const std::string line, std::string seperator = "/|\\")
{
    std::vector <std::string> vData = it008e::Strings::splitString(line, seperator);

    stClientData data;

    data.accNum = vData[0];
    data.pin = std::stoi(vData[1]);
    data.name = vData[2];
    data.phone = vData[3];
    data.balance = std::stoi(vData[4]);
    
    return data;
}

void printData(const stClientData &data)
{
    std::cout << it008e::Strings::toTitleCase("\n account number: ") << data.accNum
              << it008e::Strings::toTitleCase("\n account pIN: ") << data.pin
              << it008e::Strings::toTitleCase("\n account name: ") << data.name
              << it008e::Strings::toTitleCase("\n account phone number: ") << data.phone
              << it008e::Strings::toTitleCase("\n account balance: ") << data.balance;
}

int main()
{
    stClientData ClientData;

    std::string line = dataToRecord(ClientData);

    stClientData test = recordToData(line);

    printData(test);

    return 0;
}