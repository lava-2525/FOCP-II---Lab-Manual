#include <iostream>
using namespace std;

class Divisible
{
public:
    int arr[5], i, max1, max2;

    void getData()
    {
        for (i = 0; i < 5; i++)
        {
            cout << "Enter the stocks value " << (i + 1) << ": ";
            cin >> arr[i];
        }

        max1 = arr[0];
        max2 = arr[1];

        if(max2 > max1)
        {
            int temp = max1;
            max1 = max2;
            max2 = temp;
        }

        for (i = 2; i < 5; i++)
        {
            if (arr[i] > max1)
            {
                max2 = max1;
                max1 = arr[i];
            }
            else if (arr[i] > max2 && arr[i] != max1)
            {
                max2 = arr[i];
            }
        }

        cout << "The first and second largest stocks are: " << max1 << " " << max2;
    }
};

int main()
{
    Divisible m;
    m.getData();
    return 0;
}
