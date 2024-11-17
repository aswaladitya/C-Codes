#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    int s = 0;
    int e = str.length() - 1;
    bool bl = true;

    while (s <= e)
    {
        if (str[s] != str[e])
        {
            bl = false;
        }
        s++;
        e--;
    }

    return bl;
}

int checkwordinline(string str)
{
    string newstr = "";
    int i = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        int j = 0;
        newstr = "";  // Reset newstr for each word

        // Extract word from str
        while (str[i] != ' ' && str[i] != '\0')
        {
            newstr += str[i]; // Append character to newstr
            i++;  // Move to next character
        }

        // Check if the word is a palindrome
        if (isPalindrome(newstr) && newstr != "") // Avoid empty string
        {
            count++;
        }

        // Skip spaces
        while (str[i] == ' ' && str[i] != '\0')
        {
            i++;
        }
    }

    return count;
}

int main()
{
    string line;
    cout << "Enter your string:" << endl;
    getline(cin, line);

    // Checking if the entire string is a palindrome
    if (isPalindrome(line))
    {
        cout << "It is a palindrome." << endl;
    }
    else
    {
        cout << "It's not a palindrome." << endl;
    }

    // Counting palindrome words
    cout << "Count is: " << checkwordinline(line) << endl;
}
