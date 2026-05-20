#include <iostream>
using namespace std;
class Divisible
{
public:
    int arr[5], i,count= 0;
    void getData()
    {
        for (i = 0; i < 5; i++)
        {
            cout << "Enter the number " << (i + 1) << ": ";
            cin >> arr[i];
            cout << endl;
        }

        for (int i = 0; i < 5; i++)
        {
            if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
            {
                count =+ 1;
            }
        }
        cout << "Total numbers divisible by 3 and 5 are: " << count;
    }
};
int main()
{
    Divisible m;
    m.getData();
    return 0;
}
