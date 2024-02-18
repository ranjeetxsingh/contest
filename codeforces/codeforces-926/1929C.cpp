#include <iostream>

using namespace std;

bool can_win(int k, int x, long long a) {
    
    if(a <= x)   return false;
    if(k > x + 1)   return true;
    
    long long used = 0;
    for(int i=0; i <= x; i++){
        int bet = used/(k-1) + 1;
        used += bet;

        if(used > a)    return false;
    }

    return true;


}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, x;
        long long a;
        cin >> k >> x >> a;

        if (can_win(k, x, a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
