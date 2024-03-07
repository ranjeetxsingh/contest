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
		vi a(n);
		for(auto &e: a)
			cin >> e;

		sort(a.begin(), a.end(), greater<int>());
		ll maxi = INT_MIN;
		ll sum = 0;
		for(int i=0; i<n; i++){
			ll x = a[i]*(i+1);
			maxi = max(maxi, x);
		}
		cout << maxi << endl;
	}
}