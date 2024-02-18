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
		int n, m;
		cin >> n >> m;
		string s, k;
		cin >> s;
		cin >> k;

		int key = stoi(k);
		vector<int> v(m, 0);
		for (int i = 0; i < m; i++) {
			v[i] = key % 10;
			key = key / 10;
		}
		string my_key = "";

		for (int  i = 0; i < m; i++) {
			my_key += s[i];
		}
		int minStartIdx = INT_MAX;
		int minDiff = INT_MAX;
		int ans = 0;
		for (int i = 0; i < n - m; i++) {
			int current = stoi(s.substr(i, m));
			int c = m;
			if (key == current) {
				ans = 0;
				break;
			}

		}

	}

	return 0;
}