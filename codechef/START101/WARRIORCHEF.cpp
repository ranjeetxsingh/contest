#include<bits/stdc++.h>
using namespace std;


bool is_possible(vector<int> v, int x, int h) {
	for (int es : v) {
		if (es <= x)
			continue;
		else if (es >= h)
			return false;
		else
			h = h - es;
	}

	if (h > 0)	return true;
	return false;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t-- > 0) {
		int n, h;
		cin >> n >> h;
		vector<int> v(n, 0);
		int sumOfAll = 0;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			sumOfAll += v[i];
		}

		int low = 0, high = sumOfAll + 1;
		int possible_ans = INT_MAX;

		while (low <= high) {
			int mid = low - (low - high) / 2;
			if (is_possible(v, mid, h)) {
				high = mid - 1;
			}
			else
				low = mid + 1;

		}

		cout << low << endl;

	}

	return 0;
}