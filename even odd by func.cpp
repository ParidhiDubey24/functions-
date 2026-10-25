#include<iostream>
using namespace std;
    int checknumber( int num ){
    if( num %2 == 0 ){
        return 1;
    }
    else 
    return 0;
    }
    int main(){
         int num;
          cout<<"Enter a number : ";
          cin>>num;
        int result = checknumber( num );
        if( result==1 ){
            cout<<" Number is Even "<<endl;
        }
            else 
            cout<<" Number is Odd "<<endl;
            return 0;
    }