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
		for(auto &e: a)		cin >> e;
		long long int ans = 0;
		long long int sum = 0;
		int maxi = INT_MIN;
		for(int i=0; i<n; i++){
			sum += a[i];
			maxi = max(a[i], maxi);
			if(maxi == (sum-maxi)){
				ans++;
			}
		}

		cout << ans << endl;
	}
}