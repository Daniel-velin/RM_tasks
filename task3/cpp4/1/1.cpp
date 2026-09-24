#include<iostream>
using namespace std;
int main(){
    string fonts[10][5] = {
    {"XXX", "X.X", "X.X", "X.X", "XXX"}, 
    {"..X", "..X", "..X", "..X", "..X"}, 
    {"XXX", "..X", "XXX", "X..", "XXX"}, 
    {"XXX", "..X", "XXX", "..X", "XXX"}, 
    {"X.X", "X.X", "XXX", "..X", "..X"}, 
    {"XXX", "X..", "XXX", "..X", "XXX"}, 
    {"XXX", "X..", "XXX", "X.X", "XXX"}, 
    {"XXX", "..X", "..X", "..X", "..X"}, 
    {"XXX", "X.X", "XXX", "X.X", "XXX"}, 
    {"XXX", "X.X", "XXX", "..X", "XXX"} 
    };
    int n;
    string s;
    cin>>n;
    cin>>s;
    for (int row = 0; row < 5; row++) {
        for (int i = 0; i < n; i++) {
            int digit = s[i] - '0';
            cout << fonts[digit][row];
            if (i != n - 1) {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}