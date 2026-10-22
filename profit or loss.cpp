#include<iostream>
using namespace std;
int main(){
    int cp, sp;
    cout<< "Enter Cost Price of the Product : ";
    cin>>cp;
    cout<< "Enter Selling Price of the Product : ";
    cin>>sp;
    if ( cp>sp ){
        cout<<"Loss = " << cp-sp<< endl;
    }
    else if( cp<sp ){
        cout<<"Profit = "<< sp-cp<< endl;
    }
    else
    cout<<"Neither Profit Nor Loss"<< endl;
    return 0;
}