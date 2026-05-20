#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3;
    cout << "Enter the first side: ";
    cin >> s1;
    cout << "Enter the second side: ";
    cin >> s2;
    cout << "Enter the third side: ";
    cin >> s3;
    if(s1 == s2 && s2== s3 && s1 == s3){
        cout<<"equileteral triangle";
    }
    
    else if(s1 != s2 && s1 != s3 && s2 != s3){
        cout<<"scalene triangle";
    }
    else{
        cout<< "isosecles triangle";
    }
    return 0;
}
