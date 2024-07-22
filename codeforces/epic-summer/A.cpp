#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;

		int ans = 0;
		int upload = 0;

		while(upload != n-1){
			ans += k;
			upload++;
		}

		cout << ans + 1 << endl;


	}
}