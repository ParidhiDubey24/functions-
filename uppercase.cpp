#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<< " Enter any Character : ";
    cin>>ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout<< "Uppercase Alphabet" << endl;
    }
    else{
        cout<< "Lowercase Alphabet " << endl;
    }
    return 0;
}