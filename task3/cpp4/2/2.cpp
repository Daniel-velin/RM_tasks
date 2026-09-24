#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int r=0;
    int c=N/2;
    int num[40][40]={0};
    num[r][c]=1;
    for(int i=2;i<=N*N;i++){
        if(r==0 && c!=N-1){
            r=N-1;
            c=c+1;
        }
        else if(r!=0 && c==N-1){
            c=0;
            r=r-1;
        }
        else if(r==0 && c==N-1){
            r=r+1;
        }
        else if(r!=0 && c!=N-1 && num[r-1][c+1]==0){
            r=r-1;
            c=c+1;
        }
        else if(r!=0 && c!=N-1 && num[r-1][c+1]!=0){
            r=r+1;
        }
        num[r][c]=i;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}