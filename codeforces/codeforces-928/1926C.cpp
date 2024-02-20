#include<bits/stdc++.h>
using namespace std;

const int MAX = 2e5+7;

int res[MAX];

long long int digit_sum(int num) {
    long long int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


void solve(){
	int x;
	cin >> x;
	cout << res[x] << endl;
}


int main(){
	int t;
	cin >> t;
	res[0] = 0;
	for(int i=1; i<MAX; i++){
		res[i] = res[i-1] + digit_sum(i);
	}

	while(t--){

		solve();
	}
}

