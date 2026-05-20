#include <iostream>
using namespace std;
class Odd
{
public:
    int arr[5], i, even = 0, odd = 0;
    void getData()
    {
        for (i = 0; i < 5; i++)
        {
            cout<<"Enter 5 numbers "<<(i+1)<<" :";
            cin >> arr[i];
        }
        for (i = 0; i < 5; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even = even + arr[i];
            }
            else
            {
                odd = odd + arr[i];
            }
        }
        cout << "Sum of all Even numbers: " << even<<endl;
        cout << "Sum of all odd numbers: " << odd;
    }
};
int main()
{
    Odd o;
    o.getData();
    return 0;
}
