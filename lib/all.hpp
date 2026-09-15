#pragma once

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <cctype>

namespace all
{
    inline int readNumber(std::string prompt, std::string failedPrompt = "\nNot A Valid Number, Enter Again:\n")
    {
        int num;

        std::cout << prompt;
        std::cin >> num;

        while (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << failedPrompt;
            std::cin >> num;
        }
        

        return num;
    }

    inline float halfNum(int num)
    {
        return static_cast<float>(num) / 2;
    }

    inline int rectangleAreaDimensions(int a, int b){
        return a * b;
    }

    inline int rectangleAreaDiagonal(int diagonal, int side){
        return side * sqrt((pow(diagonal, 2) - pow(side, 2)));
    }

    inline bool validateNumInRange(int num, int from, int to)
    {
        return (num >= from && num <= to);
    }

    inline int factorial(int n)
        {
        int sum = 1;

        for (int i = 1; i <= n; i++)
        {
            sum *= i;
        }

        return sum;
    }

    inline bool checkPrime(int number)
    {
        if (number < 2)
            return false;

        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
                return false;
        }

        return true;
    }

    inline int sumOfDigits(int num)
    {
        int remainder = 0;

        int sumOfDigits = 0;

        while (num > 0)
        {
            remainder = num % 10;
            num /= 10;

            sumOfDigits += remainder;
        }

        return sumOfDigits;
    }

    inline int reversedNumber(int num)
    {

        int remainder = 0, reversed = 0;

        while (num > 0)
            {
                remainder = num % 10;
                num /= 10;

                reversed = reversed * 10 + remainder;
            }

        return reversed;
    }

    inline int readPositiveNumber(const std::string &message)
    {
        int num = 0;

        do
        {
            num = readNumber(message);
        } while (num <= 0);

        return num;
    }


    inline void readArray(int array[100], int &arraySize)
    {
        arraySize = readPositiveNumber("\nEnter Array Elements Number: ");
    
        std::cout << "\n Enter array elements:";

        for (int i = 0; i < arraySize; i++)
        {
            std::cout << "\n Element [" << i + 1 << "]: ";
            std::cin >> array[i];
        }
    }

    inline int timesRepeatedInArray(int array[100], int arraySize, int numToCheck)
    {
        int repeatition = 0;

        for (int i = 0; i < arraySize; i++)
        {
            if (numToCheck == array[i])
            {
                repeatition++;
            }
        }
    
        return repeatition;
    }

    inline void printArray(int array[100], int arraySize)
    {
    
        for (int i = 0; i < arraySize; i++)
        {
            std::cout << array[i] << " ";
        }   
    }

    inline short numIndexInArray(int array[100], int arraySize, int numToFind)
    {
        for (int i = 0; i < arraySize; i++)
        {
            if (array[i] == numToFind)
            {
                return i;
            }
        }

        return -1;    
    }

    inline bool isNumInArray(int array[100], int arraySize, int numToFind)
    {
        return (numIndexInArray(array, arraySize, numToFind) !=  -1);
    }

    inline void addArrayElement(int array[100], int &arraySize, int numToAdd)
    {
        if (arraySize >= 100)
        {
            return ;
        }
        
        arraySize++;
        array[arraySize - 1] = numToAdd;
    }

    inline int randomNumber(int from, int to)
    {
        int ranNum = rand() % (to - from + 1) + from;
    
        return ranNum;
    }

    inline std::string readText(const std::string &message)
    {
        std::string text;

        std::cout << message;
        std::cin >> std::ws;
        std::getline(std::cin, text);

        return text;
    }

    inline std::string stringLowerCase(std::string text)
    {
        for (char &c : text)
        {
            c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        }

        return text;
    }

    inline std::string stringUpperCase(std::string text)
    {
        for (char &c : text)
        {
            c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
        }

        return text;
    }

    inline std::string stringTitleCase(std::string text)
    {
        bool isFirstLetter = true;

        for (char &c : text)
        {
            if (isFirstLetter && c != ' ')
            {
                c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
                isFirstLetter = false;
            }

            isFirstLetter = (c == ' ') ? true : false;
        }
        
        return text;
    }

    inline std::string stringNormalCase(std::string text)
    {
        bool isFirstLetter = true;

        for (char &c : text)
        {
            if (isFirstLetter && c != ' ')
            {
                c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));

                isFirstLetter = false;
            }

            isFirstLetter = (c == ' ') ? true : false;
        }
        
        return text;
    }

    inline std::vector <char> vectorFirstLetters(std::string text)
    {
        std::vector <char> vLetters;

        bool isFirstLetter = true;

        for (char &c : text)
        {
            if (isFirstLetter && c != ' ')
            {
                vLetters.push_back(c);

                isFirstLetter = false;
            }

            isFirstLetter = (c == ' ') ? true : false;
        }

        return vLetters;
    }

    inline char readChar(const std::string &message)
    {
        char c;

        std::cout << message;
        std::cin >> c;

        return c;
    }

    inline char invertLetterState(char c)
    {
        const unsigned char uc = static_cast<unsigned char>(c);

        return (std::isupper(uc)) ? static_cast<char>(std::tolower(uc)) : static_cast<char>(std::toupper(uc));
    }

}