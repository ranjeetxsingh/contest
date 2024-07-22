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
		for(auto &e: a)		cin >> e;

		unordered_map<int, int> mp;
		int cnt = 0;
		for(int i=0; i<n; i++){
			if(mp.find(a[i]) == mp.end())
				mp[a[i]]++;
			else
				cnt++;
		}

		cout << cnt << endl;
	}
}