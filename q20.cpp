#include<iostream>
using namespace std;
class Print {
    public:
    void display(){
        for (int i = 1 ; i < 4;i++){
            for(int j = 1 ; j < 6; j ++ ){
                cout << j << " " ;
            }
            cout<< endl;
        }
    }
};
int main(){
    Print ob ;
    ob.display();
    return 0;
}
