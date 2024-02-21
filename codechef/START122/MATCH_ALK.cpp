#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<pair<int, int>> matchStat(22);
		for(auto &x: matchStat){
			cin >> x.first;
			cin >> x.second;
		}
		int maxi = INT_MAX;
		int playerIdx = -1;
		for(auto i=0; i<22; i++){
			auto x = matchStat[i];
			int points = x.first + (20*x.second);
			if(points > maxi){
				maxi = points;
				playerIdx = i+1;
			}
		}

		cout << playerIdx << endl;
	}
}