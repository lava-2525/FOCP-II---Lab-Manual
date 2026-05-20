#include <iostream>
using namespace std;
class Prime
{
    int a;

public:
    void getData()
    {
        cout << "Enter a number to find prime numbers within the range: ";
        cin >> a;

        for (int i = 2; i <= a; i++)
        {
            bool prime = true;

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (prime)
            {
                cout << i << " ";
            }
        }
    }
};
int main()
{
    Prime ob;
    ob.getData();
    return 0;
}
