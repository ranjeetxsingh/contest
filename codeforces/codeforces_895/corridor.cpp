#include<bits/stdc++.h>
using namespace std;


bool compare(vector<int> a, vector<int> b) {
	return a[1] < b[1];
}


bool canReturn(vector<vector<int>> rooms, int returnedFromRoom) {
	int k = 1;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin >> t;

	while (t-- > 0) {

		int n ;
		cin >> n;

		vector<int> d(n);
		vector<int> s(n);
		for (int i = 0; i < n; i++)
			cin >> d[i] >> s[i];
		int ans = INT_MAX;
		for (int i = 0; i < n; i++) {
			int x = (s[i] - 1) / 2;
			ans = min(ans, x + d[i]);
		}

		cout << ans << endl;



	}

	return 0;
}