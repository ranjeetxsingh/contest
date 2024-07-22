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

		int maxi = INT_MAX;

		for(int i=0, j=1; j<n; i++, j++){
			int x = max(a[i], a[j]);
			maxi = min(x, maxi);
		}

		cout << maxi-1 << endl;
	}
}