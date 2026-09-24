#include<iostream>
using namespace std;
int main(){
    int w,x,h,q;
    cin>>w>>x>>h>>q;
    int total=w*x*h;
    bool cut[21][21][21]={};
    int count=0;
    int x1,y1,z1,x2,y2,z2;
    for(int i=0;i<q;i++){
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for(int i=x1;i<=x2;i++){
            for(int j=y1;j<=y2;j++){
                for(int k=z1;k<=z2;k++){
                    if(cut[i][j][k]==false){
                        cut[i][j][k]=true;
                        count++;
                    }
                }
            }
        }
    }
    cout<<total-count;
    return 0;
}
