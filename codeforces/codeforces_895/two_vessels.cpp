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
		int a, b, c;
		cin >> a >> b >> c;

		int cnt = 0;
		int maxNum = max(a, b);
		int minNum = min(a, b);
		a = maxNum;
		b = minNum;
		while ( (a - b) > 0) {
			cnt++;
			a = a - c;
			b = b + c;
		}

		cout << cnt << endl;
	}

	return 0;

}