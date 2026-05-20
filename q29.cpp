#include <iostream>
using namespace std;
class Minimum
{
public:
    int arr[30], i;
    void getData()
    {
        for (i = 0; i < 30; i++)
        {
            cout << "Enter the temperature of each day(till 30days) " << (i + 1) << ": ";
            cin >> arr[i];
            cout << endl;
        }

        int min = arr[0];

        for (int i = 1; i < 30; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        cout << "Maximun price: " << min;
    }
};
int main()
{
    Minimum m;
    m.getData();
    return 0;
}
