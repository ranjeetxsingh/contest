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
		int flag = 0;
		vi a(n);
		for(auto &e: a)
			cin >> e;

		for(int x: a)
			if(x == k)		flag = 1;

		if(flag == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}