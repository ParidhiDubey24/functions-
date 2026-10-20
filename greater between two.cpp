#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<< "Enter two Numbers : " ;
    cin>> num1 >> num2;
    if( num1>num2 ){
        cout<< "Greater Number is = " << num1 << endl;
    }
    else if( num2 > num1 ){
        cout<< "Greater Number is = " << num2 << endl;
    }
    else 
    cout<< "Numbers are Equal "<< endl;
    return 0;
}