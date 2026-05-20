#include <iostream>
using namespace std;
class Palindrome
{
    int a, temp, sum = 0;

public:
    void getData()
    {
        cout << "Enter the number to check palindrome: ";
        cin >> a;
        temp = a;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum = sum * 10 + digit;
            temp = temp / 10;
        }
    }
    void display()
    {
        if (a == sum)
        {
            cout << "The number is a palindrome.";
        }
        else
        {
            cout << "The number is not a palindrome.";
        }
    }
};
int main()
{
    Palindrome ob;
    ob.getData();
    ob.display();
    return 0;
}
