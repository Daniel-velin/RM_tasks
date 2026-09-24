#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    int sum=0;
    int count=0;
    int i=1;
    while(sum+i<=k){
        count+=i*i;
        sum+=i;
        i++;
    }
    count +=(k-sum)*i;
    cout<<count;
    return 0;
}