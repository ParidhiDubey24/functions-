#include<iostream>
using namespace std;
int main(){
    int age, choice;
    cout<<"Application no. 1 for vote "<< endl;
    cout<<"Application no. 2 for driving license "<< endl;
    cout<<"Enter Application no. you are checking for : ";
    cin>>choice;
    cout<< "Enter your current age : ";
    cin>>age;

    if( choice==1 ){
        if( age>=18 ){
            cout<<"You are Eligible for vote"<< endl;
        }
        else 
        cout<<"You are NOt Eligible for vote"<< endl;
    }

    if( choice==2 ){
        if( age>=18){
            cout<<"You are Eligible for applying for a driving license "<< endl;
        }
        else 
        cout<<"You are Not Eligible for applying for a driving license "<< endl;
    }

    return 0;
}