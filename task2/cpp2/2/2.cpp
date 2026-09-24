#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t,t1,t2;
    vector<int> a;
    vector<int> b;
    vector<int> sum;
    for(int i=0;i<7;i++){
        cin>>t1>>t2;
        a.push_back(t1);
        b.push_back(t2);
    }
    for(int i=0;i<7;i++){
        t=a[i]+b[i];
        sum.push_back(t);
    }
    int max_t=sum[0];
    int max_index=0;
    for(int i=0;i<7;i++){
        if(sum[i]>max_t){
            max_t=sum[i];
            max_index=i;
        }
    }
    if(max_t>8){
        cout<<max_index+1;
    }
    else{
        cout<<0;
    }
    return 0;
}