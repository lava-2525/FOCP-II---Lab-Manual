#include<iostream>
using namespace std;

class Prime {
public:
    void display(int a, int b) {

        for(int i=a;i<=b;i++){
            int count = 0;

            for(int j=1;j<=i;j++){
                if(i%j==0){
                    count++;
                }
            }

            if(count==2){
                cout<<i<<" ";
            }
        }
    }
};

int main(){
    int a,b;
    cout<<"Enter two limits: ";
    cin>>a>>b;

    Prime p;
    p.display(a,b);

    return 0;
}
