#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){

		int n,k;
		cin >> n >> k ;

		int diag = (4 * n) - 2;

		int ans = (k/2) + (k%2);

		if(k == diag)	ans = ans + 1;

		cout << ans << endl; 


	}


	return 0;
}