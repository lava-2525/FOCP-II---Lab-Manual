#include <iostream>
using namespace std;
class alpha
{
public:
    void display()
    {
        for (char ch = 'A'; ch <= 'E'; ch++)
        {
            for (char cp = 'A'; cp <= ch; cp++)
            {
                cout << cp;
            }
            cout<<endl;
        }
    }
};
int main()
{
    alpha h;
    h.display();
    return 0;
}
