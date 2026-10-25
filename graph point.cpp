#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<" Enter Value of point X : ";
    cin>>x;
    cout<<" Enter Value of point Y : ";
    cin>>y;
    if ( x > 0 && y > 0 ){
        cout<<"Point is in 1st Quadrant "<<endl;
    }
    else if ( x < 0 && y > 0 ){
        cout<<"Point is in 2nd Quadrant "<<endl;
    }
     else if ( x < 0 && y < 0 ){
        cout<<"Point is in 3rd Quadrant "<<endl;
    }
     else if ( x > 0 && y < 0 ){
        cout<<"Point is in 4th Quadrant "<<endl;
    }
    else if ( x == 0 && y == 0 ){
        cout<<"Point is in on Origin "<<endl;
    }
     else if ( x == 0 ){
        cout<<"Point is in on X-axis "<<endl;
    }
    else
        cout<<"Point is on Y-axis "<<endl;
        return 0;
}
    