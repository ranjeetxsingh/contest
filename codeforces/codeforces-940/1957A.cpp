#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vi a(n);
		for(auto &e: a)	cin >> e;

		unordered_map<int, int> mp;
		for(int x: a){
			mp[x]++;
		}

		int ans = 0;

		for(auto itr=mp.begin(); itr!=mp.end(); itr++){
			int total = (*itr).second;
			ans += (total/3);
		}
		cout << ans << endl;
	}
}