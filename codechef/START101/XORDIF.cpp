#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t-- > 0) {
		int a, b;
		cin >> a >> b;
		int c = a, d = b;
		int low = 0, high = 1073741824;
		int minDiff = INT_MAX;
		int ans = 0;
		while (low <= high) {
			int mid = low - (low - high) / 2;
			int c = a, d = b;
			if (abs((a ^ mid) - (b ^ mid)) < minDiff) {
				ans = mid;
				minDiff = abs((a ^ mid) - (b ^ mid));
				high = mid - 1;
			}
			else
				low = mid + 1;
		}

		cout << ans << endl;
	}


	return 0;
}