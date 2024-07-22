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
		for(auto &e : a)	cin >> e;

		int xr = 0;
		for(auto x: a)	xr = xr^x;

		if(n&1 || xr==0)	cout << xr << endl;
		else cout << -1 << endl;
	}
}