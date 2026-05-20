#include <iostream>
using namespace std;
class Marks
{
public:
    int m1, m2, m3, m4, m5;
    float per, total;
    void getDetails()
    {
        cout << "Enter the marks of subject 1: ";
        cin >> m1;
        cout << "Enter the marks of subject 2: ";
        cin >> m2;
        cout << "Enter the marks of subject 3: ";
        cin >> m3;
        cout << "Enter the marks of subject 4: ";
        cin >> m4;
        cout << "Enter the marks of subject 5: ";
        cin >> m5;
        total = m1 + m2 + m3 + m4 + m5;
    }
    void displayResult()
    {
        cout << "The total marks obtained out of 100 is: " << total << endl;
        per = (total / 500) * 100;
        cout << "Percentage: " << per;
    }
};
int main()
{
    Marks b;
    b.getDetails();
    b.displayResult();
    return 0;
}
