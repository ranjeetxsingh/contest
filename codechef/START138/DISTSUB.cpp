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
		
		int ans = ((k*(k+1))/2) + (k-1);

		if(ans <= n)	cout << "YES\n";
		else			cout << "NO\n";
	}
}