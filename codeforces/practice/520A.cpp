#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	string s;
	cin >> n;
	cin >> s;

	vector<int> v(26, 0);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for (char ch : s) {
		v[ch - 'a']++;
	}

	int containsAll = true;
	for (int x : v)
		if (x == 0)	containsAll = false;

	if (containsAll)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;



	return 0;
}