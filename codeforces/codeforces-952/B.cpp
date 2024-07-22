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
		int ans = 0;
		long long int sum = 0;
		for(int i=2; i<=n; i++){
			int k = 2;
			long long int s = 0;
			for(int x = i; x <= n; x=i*k++){
				s += x;
			}
			if(sum <= s){
				sum = s;
				ans = i;
				// cout << n << " >>> " << i << " >> " << s << endl;
			}
			else{
				break;
			}
		}
		cout << ans << endl;
	}
}