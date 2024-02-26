#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
 
	while(t--){
		int n, k;
		cin >> n >> k;
 
		vector<int> a(n);
		for(auto &e: a)
			cin >> e;
		
		long long int b[n+1] = {0};
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			b[abs(x)] += a[i];
		}
 
		int flag = 1;
		long long int rem = 0;

		for(int i=1; i<=n; i++){
			rem += k;
			if(rem < b[i])
				flag = 0;
			else
				rem -= b[i];
		}

		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
		
 
	}
}
