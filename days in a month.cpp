#include<iostream>
using namespace std;
int main(){
    int month;
    cout<< "Enter 1 for January" << endl;
    cout<< "Enter 2 for February" << endl;
    cout<< "Enter 3 for March" << endl;
    cout<< "Enter 4 for April" << endl;
    cout<< "Enter 5 for May" << endl;
    cout<< "Enter 6 for June" << endl;
    cout<< "Enter 7 for July" << endl;
    cout<< "Enter 8 for August" << endl;
    cout<< "Enter 9 for September" << endl;
    cout<< "Enter 10 for October" << endl;
    cout<< "Enter 11 for November" << endl;
    cout<< "Enter 12 for December" << endl;
    cout<< "Enter the Number of Month : ";
    cin>>month;
    if( month==4 || month==6 || month==9 || month ==11){
        cout<< "There are 30 Days in this Month" << endl;
    }
    else if( month ==2 ){
        cout<< "There are 28 Days in this Month, in case of Leap Year there are 29 Days "<< endl;
    }
    else if( month==1 || month==3 || month==5 || month ==7 || month==8 || month==10 || month==12 ){
    cout<< "There are 31 Days in this Month"<< endl;
    }
    else
    cout<< "Enter valid number"<< endl;
    return 0;
}