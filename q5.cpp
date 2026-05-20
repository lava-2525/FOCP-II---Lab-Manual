#include <iostream>
using namespace std;
int main(){
   int nu1, nu2, a;
    nu1 = 10;
    nu2 = 20;
    // a = nu1;
    // nu1 = nu2;
    // nu2 = a;
    nu1 = nu1 * nu2;
    nu2 = nu1 / nu2;
    nu1 = nu1 / nu2; 
    cout << "The first number is: " << nu1 << "\n";
    cout << "The second number is: " << nu2;

    return 0;
}
    
