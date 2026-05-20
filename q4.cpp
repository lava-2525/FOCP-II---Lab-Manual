#include<iostream>
using namespace std;
int main (){
    int itmn,quan,unitp,totalp;
    float dics;
    cout<<"Enter the item number: ";
    cin>>itmn;
    cout<<"Enter the quantity of the items: ";
    cin>>quan;
    cout<<"Enter the price of the item: ";
    cin>>itmn;
    totalp = quan * itmn;
    dics = totalp*0.2;
    totalp = totalp - dics;
    cout<<"The total amount after discount: "<<totalp;
    return 0;
}
