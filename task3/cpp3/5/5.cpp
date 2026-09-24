#include<iostream>
using namespace std;
int main(){
    long long n;
    int x;
    int count=0;
    cin>>n>>x;
    for(long long i=1;i<=n;i++){
        long long num =i;
        while(num>0){
            if(num%10==x){
                count++;
            }
            num/=10;
        }
    }
    cout<<count;
    return 0;
}