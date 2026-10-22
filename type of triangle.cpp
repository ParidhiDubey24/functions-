#include<iostream>
using namespace std;
int main(){
    int side1, side2, side3;
    cout<< "Enter First Side of triangle : ";
    cin>>side1;
    cout<< "Enter Second Side of triangle : ";
    cin>>side2;
    cout<< "Enter Third Side of triangle : ";
    cin>>side3;

    if( side1==side2 && side2==side3 ){
        cout<<"Equilateral Triangle";
    }

    else if( side1==side2 || side1==side3 || side2==side3 ){
        cout<<"Isosceles Triangle";
    }

    else
    cout<<"Scalene Triangle";

    return 0;
}