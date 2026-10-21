#include<iostream>
using namespace std;
int main(){
    int year;
    cout<< "Enter a Year : ";
    cin>>year;
    if(year%4 == 0){
        cout<< "It is a Leap Year" << endl;
    }
    else
    cout<< "It is Not a Leap Year " << endl;
    return 0;
}