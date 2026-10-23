#include<iostream>
using namespace std;
int main(){
    int angle1, angle2, angle3;
    cout<<"Enter three angles of a triangle : ";
    cin>> angle1 >> angle2 >> angle3;
    if ( angle1 + angle2 + angle3 == 180 ){
        cout<<"Valid Triangle "<< endl;
    }
    else 
    cout<< "Invalid Triangle "<< endl;
    return 0;
}