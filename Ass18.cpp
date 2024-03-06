#include <iostream>
using namespace std;
  int main(){
    int num1;

        cout << "Enter a Num1 : ";     
        cin >> num1;      

        if(num1<=0){
            cout << "num is a postive ";
        }else if(num1<0){
            cout << "num is a nagtive " ;
        }else{
            cout <<"Zero";
        }
}