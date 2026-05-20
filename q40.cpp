#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str, cleaned = "", finalStr = "";
    int words = 0, digits = 0, special = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    bool spaceFound = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            cleaned += str[i];
            spaceFound = false;
        }
        else
        {
            if (!spaceFound && cleaned.length() > 0)
            {
                cleaned += ' ';
                spaceFound = true;
            }
        }
    }
    if (cleaned.length() > 0 && cleaned[cleaned.length() - 1] == ' ')
    {
        cleaned.erase(cleaned.length() - 1);
    }

    for (int i = 0; i < cleaned.length(); i++)
    {
        if (i == 0)
            finalStr += toupper(cleaned[i]);
        else
            finalStr += tolower(cleaned[i]);
    }

    if (finalStr.length() > 0)
        words = 1;

    for (int i = 0; i < finalStr.length(); i++)
    {
        if (finalStr[i] == ' ')
            words++;

        if (isdigit(finalStr[i]))
            digits++;

        if (!isalnum(finalStr[i]) && finalStr[i] != ' ')
            special++;
    }
    bool valid = true;

    for (int i = 0; i < finalStr.length(); i++)
    {
        if (!(isalnum(finalStr[i]) || finalStr[i] == ' '))
        {
            valid = false;
            break;
        }
    }
    cout << "\nNormalized String: " << finalStr << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << special << endl;

    if (valid)
        cout << "String is valid." << endl;
    else
        cout << "String contains invalid characters." << endl;

    return 0;
}
