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

		int track_length, turtle_speed, hare_speed;
		cin >> track_length >> turtle_speed >> hare_speed;

		int time_turtle = (int) ceil( (double) track_length / (double) turtle_speed);
		int time_hare = (int) ceil( (double) track_length / (double) hare_speed);

		int head_start = (time_turtle - time_hare) - 1;

		if (head_start < 0)	cout << "-1" << endl;
		else	cout << head_start << endl;

	}

	return 0;
}