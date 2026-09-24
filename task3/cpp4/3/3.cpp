#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int win[7];
    int ticket[7];
    int a[7] = {0};
    for(int i=0;i<7;i++){
        cin>>win[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<7;j++){
            cin>>ticket[j];
            for(int k=0;k<7;k++){
                if(ticket[j]==win[k]){
                    count++;
                }
            }
            }
        if(count>0){
            a[7-count]++;
        }
    }
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
             
            
            
        
    