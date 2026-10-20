#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<< "Enter three Numbers : " ;
    cin>> num1 >> num2 >> num3;
    if( num1 > num2 && num1 > num3 ){
        cout<< "Greater Number is = " << num1 << endl;
    }
    else if( num2 > num1 && num2 > num3 ){
        cout<< "Greater Number is = " << num2 << endl;
    }
    else if( num3 > num1 && num3 > num2){
        cout<< "Greater Number is = " << num3<< endl;
    }
    else 
    cout<< " Atleast Two Numbers are Equal "<< endl;
    return 0;
}