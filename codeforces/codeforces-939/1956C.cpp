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
		long long int ans = 0;
		for(long long int i=1; i<=n; i++){
			ans += (2*i - 1)*i;
		}

		cout << ans << " " << n*2 << endl;

		for(int i=n; i>0; i--){
			cout << 1 << " " << i << " ";
			for(int j=1; j<=n; j++)	cout << j << " ";
			cout << endl;

			cout << 2 << " " << i << " ";
			for(int j=1; j<=n; j++)	cout << j << " ";
			cout << endl;
		}
	}
}