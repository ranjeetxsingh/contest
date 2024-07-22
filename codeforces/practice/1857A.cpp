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

		int cnt = 0;
		for(int x: a){
			if(x&1)	cnt++;
		}

		if(cnt&1)	cout << "NO\n";
		else		cout << "YES\n";


	}
}