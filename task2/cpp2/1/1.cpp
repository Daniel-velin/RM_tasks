#include<iostream>
using namespace std;
int main(){
    int y,m,t;
    cin>>y>>m;
    if(m==1 || m==3 || m==5 ||m==7||m==8||m==10||m==12){
        t=31;
    }
    else if(m==4||m==6||m==9||m==11){
        t=30;
    }
    else{
        if((y%4==0 && y%100!=0) || y%400==0){
            t=29;
        }
        else{
            t=28;
        }
    }
    cout<<t;
    return 0;
}