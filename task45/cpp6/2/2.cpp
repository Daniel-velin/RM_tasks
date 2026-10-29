#include <iostream>
using namespace std;
bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false; 
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool first = true;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            if (!first) {
                cout << " "; 
            }
            cout << a[i];
            first = false;
        }
    }
    return 0;
}