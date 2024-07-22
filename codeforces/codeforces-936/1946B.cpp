#include<bits/stdc++.h>
using namespace std;
#define int long long

typedef long long ll;
typedef vector<int> vi;

const int P = 1e9 + 7;

signed main(){
	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;
		vi a(n);
		for(auto &e: a)		cin >> e;
		
		int S = 0, sum = 0, cur = 0;
		
		for(int i=0; i<n; i++){
			sum += a[i];
			cur += a[i];
			cur = max(cur, 0LL);
			S = max(S, cur);
		}
		
		sum = (sum % P + P) % P;
		S = S % P;
		int t = 1;
		for(int i=0; i<k; i++){
			t = t * 2 % P;
		}

		int ans = (sum + S * t - S + P) % P;
		cout << ans << "\n";

	}
}