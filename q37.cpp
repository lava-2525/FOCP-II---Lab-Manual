#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string username;
    bool valid = true;

    cout << "Enter username: ";
    cin >> username;

    for (int i = 0; i < username.length(); i++)
    {
        if (!(isalnum(username[i]) || username[i] == '_'))
        {
            valid = false;
            break;
        }
    }

    if (valid)
    {
        cout << "Username accepted";
    }
    else
    {
        cout << "Invalid username";
    }

    return 0;
}
