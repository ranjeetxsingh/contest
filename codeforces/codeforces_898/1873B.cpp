#include<bits/stdc++.h>
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> v(n, 0);

		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		int maxIdx = -1;
		int maxNum = INT_MIN;
		for (int i = 0; i < n; i++) {
			if (v[i] == 0) {
				maxIdx = i;
				break;
			}
			if (v[i] > maxNum) {
				maxIdx = i;
				maxNum = v[i];
			}

		}
		v[maxIdx] = v[maxIdx] + 1;
		long long int maxProduct = 1;

		for (int x : v)
			maxProduct *= x;

		cout << maxProduct << endl;
	}

	return 0;
}