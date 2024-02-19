#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(auto &e: a) 	cin >> e;

		long long int ans = 0;

		for(auto e: a)
			ans = ((ans+e)/e)*e;
		cout << ans << endl;
		
	}
}