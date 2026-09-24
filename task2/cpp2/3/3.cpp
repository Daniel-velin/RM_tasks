#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b<=c || b+c<=a || a+c<=b){
        cout<<"Not triangle"<<endl;
    }
    else{
        if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
            cout<<"Right triangle"<<endl;
        }
        else if(a*a+b*b>c*c && a*a+c*c>b*b && b*b+c*c>a*a){
            cout<<"Acute triangle"<<endl;
        }
        else{
            cout<<"Obtuse triangle"<<endl;
        }
        if(a==b || a==c || b==c){
            cout<<"Isosceles triangle"<<endl;
        }
        if(a==b && b==c){
            cout<<"Equilateral triangle"<<endl;
        }
    }
    return 0;
}