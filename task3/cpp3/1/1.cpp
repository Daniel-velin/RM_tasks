#include<iostream>
#include<vector>
using namespace std;
int main(){
    int L;
    cin>>L;
    int sum=0;
    vector<int> num;
    for(int i=2;i<L;i++){
        bool isPrime = true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            if(sum+i<=L){
                sum+=i;
                num.push_back(i);
            }
            else{
            break;
            }
        }
    }
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<endl;
    }
    cout<<num.size();
    return 0;
}