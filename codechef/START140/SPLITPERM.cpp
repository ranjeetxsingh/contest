#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
        cin >> n;
        
        if (n == 3) {
        cout << "1 2 3" << endl;
    	} 
    	else if (n % 2 == 0) {
        for (int j = 1; j <= n / 2; ++j) {
            cout << j << " " << n + 1 - j << " ";
        }
        cout << endl;
    	} 
    	else {
        for (int j = 1; j <= n / 2; ++j) {
            cout << j << " " << n - j << " ";
        }
        cout << n << endl;
    	}
	}
}