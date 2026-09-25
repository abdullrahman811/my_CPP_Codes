#include <iostream>
#include <string>
#include "../../lib/all.hpp"

enum enTrim{ left, right, both };

std::string trimStringLeft(std::string text)
{
  while (!text.empty() && text[0] == ' ') {
    text.erase(0, 1);
  }
  
  return text;
}

std::string trimStringRight(std::string text)
{
  while (!text.empty() && text.back() == ' ') {
    text.pop_back();
  }
  
  return text;
}

std::string trimString(std::string text, enTrim where)
{
  switch (where)
  {
    case enTrim::left:
      return trimStringLeft(text);
      
    case enTrim::right:
      return trimStringRight(text);
      
    default:
      return trimStringLeft(trimStringRight(text));
  }
}

int main()
{
  std::string text = all::readText("\nEnter Text:\n");
  
  std::cout << all::stringTitleCase("\n Text Trimmed From Left Side :") << trimString(text, enTrim::left);
  
  std::cout << all::stringTitleCase("\n Text Trimmed From Right Side:") << trimString(text, enTrim::right);
  
  std::cout << all::stringTitleCase("\n Text Trimmed From Both Sides:") << trimString(text, enTrim::both);
  
  return 0;
}