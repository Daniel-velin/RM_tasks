#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double dis(double x1,double y1,double x2,double y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main(){
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    double len1 = dis(x1,y1,x2,y2);
    double len2 = dis(x2,y2,x3,y3);
    double len3 = dis(x1,y1,x3,y3);
    double length = len1+len2+len3;
    cout<<fixed<<setprecision(2)<<length;
    return 0;
}