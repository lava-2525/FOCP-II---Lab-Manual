#include<iostream>
using namespace std;
int main (){
    int n1,n2,n3,sum;
    float average;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Enter the third number: ";
    cin>>n3;
    sum = n1 + n2 + n3;
    average = sum /3;
    cout<<"The average of marks of three students is: "<<average;
    return 0;
}
