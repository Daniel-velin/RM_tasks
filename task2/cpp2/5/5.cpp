#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float m,h,B;
    cin>>m>>h;
    B = m/(h*h);
    if(B<18.5){
        cout<<"Underweight"<<endl;
    }
    else if(B>=18.5 && B<24){
        cout<<"Normal"<<endl;
    }
    else{
        cout<<setprecision(6)<<B<<endl<<"Overweight";
    }
    return 0;
}