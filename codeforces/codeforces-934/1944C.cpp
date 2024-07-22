#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool compare(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		map<int, int> m;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			m[x]++;
		}

		vi a;

		for(auto &i: m){
			if(i.second == 1)	a.push_back(i.first);
		}

		sort(a.begin(), a.end());

		if(a.size()>=2){
			m[a[1]] = 0;
		}

		int mex = 0;

		while(m[mex] > 0)	mex++;

		cout << mex << "\n";
		


		

	}
}