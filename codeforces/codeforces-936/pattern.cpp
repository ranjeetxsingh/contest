#include <iostream>
using namespace std;

// Function to generate Fibonacci sequence up to n elements
void generateFibonacci(long long int n, long long int fib[]) {
    fib[0] = 1;
    fib[1] = 1;
    for (long long int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

// Function to print the pattern
void printPattern(long long int n) {
    long long int fib[n+1];
    generateFibonacci(n+1, fib);
    
    for (long long int i = 1; i <= n; i++) {
        long long int k = 2;
        for(int j=1; j<=i; j++){
            if(j==1 || j==i){
                cout << fib[i] << " ";
            }else{
                cout << fib[i]*(k++) << " ";
            }
        }
        cout << "\n";
    }
}

int main() {
    long long int N;
    cin >> N;
    printPattern(N);
    return 0;
}
