#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, x;
		cin >> n >> x;
		vector<int> a(n);

		for(auto &e: a)
			cin >> e;

		int maxTankCapacity = max(a[0], 2*(x-a[n-1]));

		for(int i=1; i<n; i++){
			maxTankCapacity = max(maxTankCapacity, a[i]-a[i-1]);
		}
		cout << maxTankCapacity << endl;
	}
}