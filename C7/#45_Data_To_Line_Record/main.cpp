#include <iostream>
#include <string>
#include "../../lib/it.hpp"

struct stClientData
{
    std::string    accNum  = "";
    
    unsigned short pin     = 0;

    std::string    name    = "";
    
    std::string    phone   = "";
    
    int            balance = 0;
};

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

std::string dataToRecord(stClientData data, std::string seperator = "/|\\")
{
    std::string record = "";

    record += data.accNum + seperator;
    record += std::to_string(data.pin) + seperator;
    record += data.name + seperator;
    record += data.phone + seperator;
    record += std::to_string(data.balance);

    return record;
}

int main()
{
    stClientData ClientData = readClientData();

    std::cout << std::endl << dataToRecord(ClientData);

    return 0;
}