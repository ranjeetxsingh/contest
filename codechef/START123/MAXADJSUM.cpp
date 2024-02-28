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

		long long int sum = 0;
		sort(a.begin(), a.end());
		if(n>2){
			int temp = a[n-1];
			a[n-1] = a[1];
			a[1] = temp;
		}
		for(int i=0; i<n-1; i++){
			sum = sum + (a[i]+ a[i+1]);
		}

		cout << sum << endl;
	}
}