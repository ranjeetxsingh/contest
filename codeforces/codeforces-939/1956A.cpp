#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int k, q;
		cin >> k >> q;
		vector<int> a(k);

		for(auto &e: a)		cin >> e;

		vector<int> ni(q);
		for(auto &e: ni)		cin >> e;

		vector<int> ans;

		// sort(a.begin(), a.end());

		int minVal = a[0] - 1;

		for(auto x: ni){
			if(x >= minVal)		ans.push_back(minVal);
			else	ans.push_back(x);	
		}

		for(auto &e: ans)
			cout << e << " ";
		cout << "\n";

	}
}