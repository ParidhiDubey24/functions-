#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter a Number : ";
    cin>> num;
    if ( num%2 == 0){
        cout<< "The given number is an Even number "<< endl;
    }
    else 
    cout<< "The given number is an Odd number "<< endl;
    return 0;
}