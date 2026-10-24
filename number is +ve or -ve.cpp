#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<" Enter a Number : ";
    cin>>num;

    if( num>0 ){
        cout<<" Positive Number "<< endl;
    }

    else if ( num == 0 ){
        cout<<" Zero "<< endl;
    }
    else 
    cout<<" Negative "<< endl;
    return 0;
} 