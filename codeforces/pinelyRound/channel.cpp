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
		int n, a, q;
		cin >> n >> a >> q;

		string s;
		cin >> s;
		int cnt = a;

		for (char ch : s) {
			if (ch == '+')
				cnt++;
		}

		if (cnt > n)
			cout << "YES" << endl;
		else if (cnt == n)
			cout << "MAYBE" << endl;
		else
			cout << "NO" << endl;

	}


	return 0;
}