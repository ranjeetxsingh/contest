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
		vi p(n);
		for(auto &e: p)
			cin >> e;

		int flag = 1;
		for(int i=0; i<n; i++){
			if((i+1) == p[p[i]-1]){
				flag = 0;
				break;
			}
		}

		if(flag == 0)
			cout << 2 << endl;
		else
			cout << 3 << endl;
	}
}