#include <iostream>
#include <cmath>
using namespace std;
class Roots
{
    float a, b, c;
    float D, root1, root2;

public:
    void getValues()
    {
        cout << "The general equation is: ax^2 + bx + c"<<endl;
        cout << "The value of a is: ";
        cin >> a;
        cout << "The value of b is: ";
        cin >> b;
        cout << "The value of c is: ";
        cin >> c;
    }

    void findroots()
    {  
        D = b * b - 4 * a * c;
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
    }
    void display()
    {
        cout << "The roots of the equation " << a << "x^2 + " << b << "x + " << c << " are: ";
        cout << root1 << " and " << root2;
    }
};
int main()
{
    Roots ob;
    ob.getValues();
    ob.findroots();
    ob.display();
    return 0;
}
