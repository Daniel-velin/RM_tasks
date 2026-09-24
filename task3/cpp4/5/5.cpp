#include <iostream>
using namespace std;
struct Student {
    int chinese;
    int math;
    int english;
    int total;
};
int main() {
    int n;
    cin >> n;
    Student students[1000];
    for (int i = 0; i < n; i++) {
        cin >> students[i].chinese >> students[i].math >> students[i].english;
        students[i].total = students[i].chinese + students[i].math + students[i].english;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(students[i].chinese-students[j].chinese) > 5) continue;
            if (abs(students[i].math-students[j].math) > 5) continue;
            if (abs(students[i].english-students[j].english) > 5) continue;
            if (abs(students[i].total-students[j].total) > 10) continue;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}