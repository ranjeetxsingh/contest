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

		int perm = 1;

		for(int x: a){
			cout << n+1-x << " ";
		}
		cout << endl;

	}
}