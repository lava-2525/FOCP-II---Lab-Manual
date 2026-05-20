#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year number: ";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "The year is a leap year. ";
    }
    else {
        cout << "The year is a not a leap year. ";
    }
    return 0;
}
