#include <iostream>
using namespace std;
int main()
{
    float c, f;
    int choice;
    cout << "Enter 1 to convert c to f: " << "\n";
    cout << "Enter 2 to convert f to c: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    cout << "Enter the temperature in celcius: ";
    cin>>c;
        f = (9.0 / 5) * c + 32;
    cout << "Enter the temperature in fahrenhiet: "<<f;
        break;
    case 2:
    cout << "Enter the temperature in fahrenhiet : ";
    cin>>f;
        c = (5.0 / 9) * (f - 32);
        cout << "The temperature in celcius is: " << c;
        break;
        default:
        cout<<"invalid choice!";
    }

    return 0;
}
