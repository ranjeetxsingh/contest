#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, m, k;
		cin >> n >> m >> k;

		if((n == 1) || (m == 1))
			cout << "NO\n";
		else
		{
			int reqK = 0;
			if(n % m == 0){
				reqK = ((n/m) * (m-1));
			}
			else{
				reqK = ((n/m) * (m-1)) + ((n % m) - 1); 
			}
			// cout << "REQ K : " << reqK << endl;
			if(reqK <= k)
				cout << "NO\n";
			else
				cout << "YES\n";
		}

	}
}