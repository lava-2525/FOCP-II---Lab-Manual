#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";cin>>ch;
    if (ch >= '0' && ch <= '9')
    {
        cout << "A number";
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "A vowel";
    }
    else if (ch > 'a' && ch < 'z')
    {
        cout << "A alphabet";

    }
    else{
        cout<<"invalid output";
    }
    return 0;
}
