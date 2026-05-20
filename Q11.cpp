#include <iostream>
using namespace std;
int main()
{
    int price;
    float dis ;
    cout << "Enter the order value: ";
    cin >> price;
    if (price >= 1000)
    {
        dis = price - (price * 0.1);
        cout << "You got a 10% discount: "<<dis;
    }
    else {
        cout<<"Total amount: "<<price;
    }
    return 0;
}
