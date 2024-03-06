#include <iostream>
using namespace std;

int main(){

    int perst;
    cout<<"enter a perst :";
    cin>>perst;

    if(perst>=30 & perst<50){

        cout<<"passed 3td divi";
    }
    
     else  if(perst>=50 & perst<70){

        cout<<"passed 2td divi";
    }

   else  if(perst>=70 & perst<100){

        cout<<"passed 1td divi";
    }
    else {
        cout<<"fail";
    }

}