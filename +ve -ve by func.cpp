#include<iostream>
using namespace std;
    void checknumber( int num ){
    if( num > 0 ){
        cout<<"Positive Number "<<endl;
    }
    else if( num == 0 ){
        cout<<"Zero"<<endl;
    }
    else 
        cout<<"Negative Number "<<endl;
    }
    int main(){
         int num;
          cout<<"Enter a number : ";
          cin>>num;
        checknumber( num );
            return 0;
    }