#include <iostream>
#include <string>
using namespace std;

// Modify the character to uppercase if it's a lowercase letter
void capitalize(char& c)
{
  if(c >= 'a' && c <= 'z')
  {
    c = c - 'a' + 'A';  // Convert to uppercase
  }
}

// Capitalize the first character of each word in the string
void capitalizeFirstChar(string &str)
{
  if (str.length() > 0) {
    capitalize(str[0]);  // Capitalize the first character of the string
  }
  
  for (int i = 1; i < str.length(); i++)  // Start from the second character
  {
    if (str[i] == ' ' && i + 1 < str.length())  // If space is found and next character exists
    {
      capitalize(str[i + 1]);  // Capitalize the character after the space
    }
  }

  cout << str;  // Print the modified string
}

int main()
{
  string line;
  cout << "Enter your string: ";
  getline(cin, line);  // Read the entire line

  capitalizeFirstChar(line);  // Capitalize the first letter of each word in the string
  
  return 0;
}
