#include<iostream>
using namespace std;
    int getnumber(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if( num >10 ){
        return 1;
    }
    else 
    return 0;
    }
    int main(){
        int result = getnumber();
        if( result==1 ){
            cout<<"Number is 10 or greater than 10 "<<endl;
        }
            else 
            cout<<"Number is less than 10 "<<endl;
            return 0;
    }