#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<long> a(n);
		for(int i=0; i<n; i++)
			cin >> a[i];

		for(int i=0; i<n; i++)
			a[i] += i+1;
		sort(a.rbegin(), a.rend());
		int val = 2e9;

		for(auto e: a){
			if(e >= val){
				cout << val-1 << " ";
				val--;
			}
			else{
				cout << e << " ";
				val = e;
			}
		}

		cout << endl;
	}

	return 0;
}