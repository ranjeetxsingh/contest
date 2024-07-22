#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> occ[n + 1], doubleFirst, doubleSecond, single;
		for(int i=1; i<=2*n; i++){
			int x;
			cin >> x;
			occ[x].push_back(i);
		}

		for(int i=1; i<=n; i++){
			if(occ[i].back() <= n)	doubleFirst.push_back(i);
			else if(occ[i].front() > n)	doubleSecond.push_back(i);
			else	single.push_back(i);
		}

		vector<int> L,R;

		for(int i=0; i<min({doubleFirst.size(), doubleSecond.size(), (size_t)k}); i++){
			L.push_back(doubleFirst[i]);
			L.push_back(doubleFirst[i]);
			R.push_back(doubleSecond[i]);
			R.push_back(doubleSecond[i]);
		}

		for(int i=0; i<single.size(); i++){
			if(L.size() == 2*k)	break;
			L.push_back(single[i]);
			R.push_back(single[i]);
		}

		for(auto x: L)
			cout << x << " ";
		cout << endl;

		for(auto x: R)
			cout << x << " ";
		cout << endl;

	}
}