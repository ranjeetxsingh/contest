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
		string s;
		cin >> s;
		int n = s.length();

		int coin = 0;

		for (int i = 0; i < n; i++) {
			if (s[i] == 'A' and (i < n - 1 and s[i + 1] == 'B')) {
				coin++;
				s[i] = 'B';
				s[i + 1] = 'C';
				int k = i - 1;
				while (k >= 0 and s[k--] == 'A') {
					coin++;
					s[i] = 'B';
					s[i + 1] = 'C';
				}
			}
			else if (s[i] == 'B' and (i < n - 1 and s[i + 1] == 'A')) {
				coin++;
				s[i] = 'C';
				s[i + 1] = 'B';
			}
		}

		cout << coin << endl;
	}

	return 0;
}
