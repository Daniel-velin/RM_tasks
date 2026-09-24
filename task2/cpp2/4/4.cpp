#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int e;
    double cost;
    cin>>e;
    if(e<=150){
        cost = e*0.4463;
    }
    else if(e>=151 && e<=400){
        cost = (e-150)*0.4663+150*0.4463;
    }
    else if(e>=401){
        cost = 150*0.4463+250*0.4663+(e-400)*0.5663;
    }
    cout<<fixed<<setprecision(1)<<cost;
    return 0;
}