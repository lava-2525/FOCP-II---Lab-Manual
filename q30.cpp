#include <iostream>
using namespace std;
class Salary
{
public:
    int arr[10], i,max;
    float av;
    void getData()
    {
        for (i = 0; i < 10; i++)
        {
            cout << "Enter the salary of each employee " << (i + 1) << ": ";
            cin >> arr[i];
            cout << endl;
        }

        for (int i = 1; i < 10; i++)
        {
            max += arr[i];
        }
        cout << "Total price: " << max<<endl;
        av = max/10;
        cout<<"Average salary is: "<<av;
    }
};
int main()
{
    Salary m;
    m.getData();
    return 0;
}
