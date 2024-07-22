#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		int fa = INT_MAX;
		for(int i=1; i<=10; i++){
			int x = abs(a-i) + abs(b-i) + abs(c-i);
			fa = min(fa, x);
		}

		cout << fa << endl;
	}
}