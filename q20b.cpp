#include <iostream>
using namespace std;
class Print
{
public:
    void display()
    {
        for (int i = 1; i < 6; i++)
        {
            for (int j = 5; j >= i; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Print ob;
    ob.display();
    return 0;
}
