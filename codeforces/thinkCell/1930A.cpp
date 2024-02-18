#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<long> a(2*n);

		for(int i=0; i<2*n; i++){
			cin >> a[i];
		}

		sort(a.begin(), a.end());

		long long int sum = 0;

		for(int i=0; i<2*n; i=i+2){
			sum = sum + min(a[i], a[i+1]);
		}

		cout << sum << endl;

	}

	return 0;
}