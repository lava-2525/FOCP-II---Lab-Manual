#include <iostream>
using namespace std;
class Maximum
{
public:
    int arr[10], i;
    void getData()
    {
        for (i = 0; i < 10; i++)
        {
            cout << "Enter the price of item " << (i + 1) << ": ";
            cin >> arr[i];
            cout << endl;
        }

        int max = arr[0];

        for (int i = 1; i < 10; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << "Maximun price: " << max;
    }
};
int main()
{
    Maximum m;
    m.getData();
    return 0;
}
