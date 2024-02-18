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

		int n = 10;

		char arr[n][n];
		int i, j;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}

		int score = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 'X') {
					if (i == 0 or i == 9 or j == 0 or j == 9)	score += 1;
					else if (i == 1 or i == 8 or j == 1 or j == 8)	score += 2;
					else if (i == 2 or i == 7 or j == 2 or j == 7)	score += 3;
					else if (i == 3 or i == 6 or j == 3 or j == 6)	score += 4;
					else if (i == 4 or i == 5 or j == 4 or j == 5)	score += 5;
				}
			}
		}

		cout << score << endl;

	}

	return 0;
}