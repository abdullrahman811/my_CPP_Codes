#pragma once

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <cctype>

namespace it008e
{
    namespace IOs
    {
        inline void clearCin()
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        inline int readNum(const std::string &prompt, const std::string &failedPrompt = "\nNot A Valid Number, Enter Again:\n")
        {
            int num;

            std::cout << prompt;
            std::cin >> num;

            while (std::cin.fail())
            {
                clearCin();

                std::cout << failedPrompt;
                std::cin >> num;
            }
            
            clearCin();

            return num;
        }

        inline int readPositiveNum(const std::string &message)
        {
            int num = 0;

            do
            {
                num = readNum(message);
            } while (num <= 0);

            return num;
        }

        inline void readArray(int array[100], int &arraySize)
        {
            arraySize = readPositiveNum("\nEnter Array Elements Number: ");
        
            std::cout << "\n Enter array elements:";

            for (int i = 0; i < arraySize; i++)
            {
                array[i] = readNum("\n Element [" + std::to_string(i + 1) + "]: ");
            }
        }

        inline void printArray(int array[100], int arraySize)
        {
        
            for (int i = 0; i < arraySize; i++)
            {
                std::cout << array[i] << " ";
            }   
        }

        inline std::string readString(const std::string &message)
        {
            std::string text;

            std::cout << message;
            std::getline(std::cin, text);

            return text;
        }

        inline char readChar(const std::string &message)
        {
            char c;

            std::cout << message;
            std::cin >> c;

            clearCin();

            return c;
        }
    }

    namespace Nums
    {
        inline int randomNumber(int from, int to)
        {
            int ranNum = rand() % (to - from + 1) + from;
        
            return ranNum;
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

        inline long long int factorial(int n)
            {
            long long fact = 1;

            for (int i = 1; i <= n; i++)
            {
                fact *= i;
            }

            return fact;
        }

        inline bool isPrime(int number)
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
    }

    namespace Arrays
    {
        inline int timesNumRepeated(int array[100], int arraySize, int numToCheck)
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

        inline short numIndex(int array[100], int arraySize, int numToFind)
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

        inline bool isNumFound(int array[100], int arraySize, int numToFind)
        {
            return (numIndex(array, arraySize, numToFind) !=  -1);
        }

        inline void addElement(int array[100], int &arraySize, int numToAdd)
        {
            if (arraySize >= 100)
            {
                return ;
            }
            
            arraySize++;
            array[arraySize - 1] = numToAdd;
        }
    }

    namespace Chars
    {
        inline char invertLetterState(char c)
        {
            const unsigned char uc = static_cast<unsigned char>(c);

            return (std::isupper(uc)) ? static_cast<char>(std::tolower(uc)) : static_cast<char>(std::toupper(uc));
        }

        inline bool isVowel(char letter)
        {
            letter = static_cast<unsigned char>(std::tolower(static_cast<unsigned char>(letter)));

            return (letter == 'a' || letter == 'o' || letter == 'u' || letter == 'e' || letter == 'i');
        }
    }

    namespace Strings
    {
        enum class enTrim{ left, right, both };
        
        namespace details
        {            
            inline std::string trimStringLeft(std::string text)
            {
                for (int i = 0; i < text.length(); i++)
                {
                    if (text[i] != ' ')
                    {
                        return text.substr(i, text.length() - i);
                    }
                }
        
                return "";
            }
        
            inline std::string trimStringRight(std::string text)
            {
                while (!text.empty() && text.back() == ' ') {
                    text.pop_back();
                }
            
                return text;
            }
        }

        inline std::string toLowerCase(std::string text)
        {
            for (char &c : text)
            {
                c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
            }

            return text;
        }

        inline std::string toUpperCase(std::string text)
        {
            for (char &c : text)
            {
                c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
            }

            return text;
        }

        inline std::string toTitleCase(std::string text)
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

        inline std::string toNormalCase(std::string text)
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

        inline std::vector <char> firstLetters(std::string text)
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

        inline unsigned int countVowels(const std::string &text)
        {
            unsigned int count = 0;
            
            for (char c : text)
            {
                if (Chars::isVowel(c))
                {
                    count++;
                }
            }

            return count;
        }
        
        inline std::string invertStringCase(std::string text)
        {
            for (char &c : text)
            {
                c = Chars::invertLetterState(c);
            }
                        
            return text;
        }
        
        inline std::vector <std::string> splitString(std::string text, std::string delim)
        {
            std::vector <std::string> vWords;
            int pos = 0;
            std::string word;

            while ((pos = text.find(delim)) != std::string::npos)
            {
                word = text.substr(0, pos);

                text.erase(0, pos + delim.length());

                if (!word.empty())
                {
                    vWords.push_back(word);
                }
            }

            if (!text.empty())
            {
                vWords.push_back(text);
            }
            
            return vWords;
        }

        inline unsigned int wordCountInString(std::string text)
        {
            return static_cast<unsigned int>(splitString(text, " ").size());
        }

        inline std::string trimString(std::string text, enTrim where)
        {
            switch (where)
            {
                case enTrim::left:
                    return details::trimStringLeft(text);
            
                case enTrim::right:
                    return details::trimStringRight(text);
            
                default:
                    return details::trimStringLeft(details::trimStringRight(text));
            }
        }

        inline std::string joinString(const std::vector <std::string> &vWords, const std::string &delim = " ")
        {
            std::string mergedText;
            bool isFirst = true;

            for (const std::string & s: vWords)
            {
                if (!isFirst)
                    mergedText += delim
                ;
                
                mergedText += s;

                isFirst = false;
            }

            return mergedText;
        }
    }
}