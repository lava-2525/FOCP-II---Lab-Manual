#include <iostream>
using namespace std;
class Maximum
{
    int n, values, max;

public:
    void getData()
    {
        cout << "Enter the number of entries: ";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << "Enter the entry number " << i <<": ";
            cin >> values;
            if (i == 1)
            {
                max = values;
            }
            else if (values > max)
            {
                max = values;
            }
        }
    }
    void display(){
        cout<<"The maximum value is: "<<max;
    }
};

int main()
{
    Maximum ob;
    ob.getData();
    ob.display();
    return 0;
}
