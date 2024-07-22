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
		
		sort(a.begin(), a.end());
		
		int p = ((n+1)/2) - 1;
		
		int res = count(a.begin() + p, a.end(), a[p]);		
		
		cout << res << endl;
		
	}
}