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

		int lastIdx = -1;
		int blank = 0;
		int i;
		for(i=0; i<n; i++){
			if(a[i] == 1){
				blank = max(blank, (i-1) - (lastIdx+1) + 1);
				lastIdx = i;
			}
		}

		if(n == 1 && a[0] == 0)		cout << 1 << endl;
		else if(i == n && lastIdx!=n-1){
			blank = max(blank, (n-1) - (lastIdx+1) + 1);
			cout << blank << endl;
		}
		else{
			cout << blank << endl;
		}

	}
}