#include <iostream>
using namespace std;

void printPattern(int N) {
    int num = 1;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            num += i;
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    printPattern(N);
    return 0;
}
