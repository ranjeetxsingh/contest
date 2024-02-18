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
		string s;
		cin >> s;

		bool is_possible = false;

		if (s[0] == 'a' or s[1] == 'b' or s[2] == 'c')
			is_possible = true;

		if (is_possible)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	return 0;
}