#include<bits/stdc++.h>
using namespace std;

long long int calculateWater(vector<int> v, int h) {

	long long int water = 0;

	for (int i : v) {
		if (i <= h) {
			water += h - i;
		}
	}
	return water;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int n, x;
		cin >> n >> x;

		vector<int> v(n, 0);
		for (int i = 0; i < n; i++)
			cin >> v[i];

		long long int low = 1, high = 1000000000 + 50;
		long long int posAns = INT_MIN;

		while (low <= high) {
			long long int mid = low - (low - high) / 2;
			long long int water_upto_mid = calculateWater(v, mid);
			if (water_upto_mid > x) {
				high = mid - 1;
			}
			else {
				posAns = max(posAns, mid);
				low = mid + 1;
			}
		}

		cout << posAns << endl;


	}
	return 0;
}