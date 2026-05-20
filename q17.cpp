#include <iostream>
#include <cmath>
using namespace std;
class Property
{
    int a, s = 0;
    int i;

public:
    void getData()
    {
        cout << "Enter the number to check: ";
        cin >> a;
        for (i = 1; i < a; i++)
            if (a % i == 0)
            {
                s = s + i;
            }
    }
    void display()
    {
        if (a == s)
            cout << "The number " << a << " is a perfect number.";
        else
            cout << "It is not a perfect number.";
    }
    void armstrong()
    {
        int temp = a;
        int digits = 0;
        int sum = 0;
        int digit;

        while (temp > 0)
        {
            digits++;
            temp = temp / 10;
        }
        temp = a;
        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + (int)(pow(digit, digits) + 0.5);
            temp = temp / 10;
        }
        if (sum == a)
        {
            cout << endl<< "The number is an armstrong.";
        }
        else
        {
            cout << endl
                 << "The number is not an armstrong.";
        }
    }
};
int main()
{
    Property ob;
    ob.getData();
    ob.display();
    ob.armstrong();
    return 0;
}
