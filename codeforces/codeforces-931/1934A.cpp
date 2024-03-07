#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);

		for(auto &e: a)
			cin >> e;

		sort(a.begin(), a.end());
		long long int a1 = a[0];
		long long int a2 = a[n-1];
		long long int a3 = a[1];
		long long int a4 = a[n-2];

		long long int ans = abs(a1-a2) + abs(a2-a3) + abs(a3-a4) + abs(a4-a1);
		cout << ans << endl;
	}
}