#include <iostream>
using namespace std;
class calculator
{
    int n1, n2, choice;

public:
    void calculate()
    {
        cout << " Enter the first number: ";
        cin >> n1;
        cout << " Enter the second number: ";
        cin >> n2;
        cout<<"Enter the choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "The sum of two numbers are: " << n1 + n2;
        }
        switch (choice )
        {
            case 2:
            cout << "The procuct of two numbers are: " << n1 * n2;
        }
        switch (choice )
        {
            case 3:
            cout << "The subtraction of two numbers are: " << n1 - n2;
        }
        switch (choice )
        {
            case 4:
            cout << "The division of two numbers are: " << n1 / n2;
        }
    }
};
int main()
{
    calculator ob;
    ob.calculate();
    return 0;
}
