#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int s,v,min,hour,time,min1;
    cin>>s>>v;
    time = (s+v-1)/v+10;
    min1 = 8*60;
    min = min1-time;
    if(min<0){
        min += 24*60;
    }
    hour = int(min/60);
    min = min%60;
    cout << setfill('0') << setw(2) << hour
         << ":"
         << setw(2) << min;
    return 0;
}