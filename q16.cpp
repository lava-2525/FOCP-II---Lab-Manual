#include <iostream>
using namespace std;
class Prime
{
    int n;

public:
    void getValue()
    {
        cout << "Enter a number: ";
        cin >> n;
        bool prime = true;

        for (int i = 2; i < n; i++)
            if (n % i == 0)
            {
                prime = false;
                break;
            }

        if (prime == true)
        {
            cout << "The number is a prime number.";
        }
        else
        {
            cout << "The number is not a prime number.";
        }
    }
};
int main()
{
    Prime ob;
    ob.getValue();
    return 0;
}
