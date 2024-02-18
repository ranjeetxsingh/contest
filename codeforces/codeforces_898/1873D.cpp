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
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		int cnt = 0;
		for (int i = 0; i < n;) {
			if (s[i] == 'B') {
				i = i + k;
				cnt++;
			}
			else	i++;
		}

		cout << cnt << endl;

	}

	return 0;
}