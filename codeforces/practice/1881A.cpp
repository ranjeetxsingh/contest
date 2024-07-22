#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;


void solve(){
	int n, m;
	cin >> n >> m;
	string s, x;
	cin >> s;
	cin >> x;
	for(int i=0; i<6; i++){
		size_t found = s.find(x);
		if(found != string::npos){
			cout << i << endl;
			return;
		}
		s = s+s;
	}

	cout << -1 << endl;
}


int main(){
	int t;
	cin >> t;

	while(t--){
		solve();
	}
}