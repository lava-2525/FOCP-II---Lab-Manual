#include <iostream>
using namespace std;
class Id
{
private:
    int id;
public:
    void getData()
{
    cout << "Enter the ID number: ";
    cin >> id;
}
void idvalue()
{
    if (id % 3 == 0 && id % 5 == 0)
    {
        cout << "Buzz and Fuzz";
    }
    else if (id % 3 == 0 )
    {
        cout << "Buzz";
    }
    else if (id % 5 == 0)
    {
        cout << "Fuzz";
    }
    else
        cout << "NO TAGS";
}
}
;
int main()
{
    Id a1;
    a1.getData();
    a1.idvalue();
}
