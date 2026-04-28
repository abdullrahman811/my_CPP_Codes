#pragma once

#include <iostream>

namespace all
{
    inline int readNumber(std::string message)
    {
        int num;

        std::cout << message;
        std::cin >> num;

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

    inline bool CheckPrime(int Number)
    {
        if (Number < 2)
            return false;

        int M = round(Number / 2);

        for (int Counter = 2; Counter <= M; Counter++)
        {
            if (Number % Counter == 0)
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

    inline int readPositiveNumber(std::string message)
    {
        int num = 0;

        do
        {
            std::cout << message << std::endl;
            std::cin >> num;
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

        //if loop done without return, then no matches found
        return -1;    
    }

    inline bool isNumInArray(int array[100], int arraySize, int numToFind)
    {
        return (numIndexInArray(array, arraySize, numToFind) !=  -1);
    }

    inline void addArrayElement(int array[100], int &arraySize, int numToAdd)
    {
        arraySize++;
        array[arraySize - 1] = numToAdd;
    }
}