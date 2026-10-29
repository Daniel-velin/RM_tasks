#include<iostream>
using namespace std;
int Years(int x, int y, int years[]) {
    int count = 0;
    for (int i = x; i <= y; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            years[count] = i; 
            count++;
        }
    }
    return count;
}
int main() {
    int x, y;
    cin >> x >> y;
    
    int years[1000]; 
    int count = Years(x, y, years); 
    cout << count << endl;
    for (int i = 0; i < count; i++) {
        cout << years[i] << " ";
    }
    cout << endl;
    
    return 0;
}