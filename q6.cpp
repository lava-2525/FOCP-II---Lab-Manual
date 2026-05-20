#include <iostream>
using namespace std;
int main(){
    int emplo,sal;
    float bonus;
   cout<<"Enter the number of emlpoyees: ";
   cin>>emplo;
   cout<<"Enter the basic salary: ";
   cin>>sal;
   bonus = sal + sal*0.12;
   cout<<"the net salary is: "<<bonus;
    return 0;
}
   
