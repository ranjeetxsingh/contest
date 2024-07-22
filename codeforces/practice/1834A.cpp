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

		int posOne = 0, negOne = 0;

		for(auto x: a){
			if(x == 1)	posOne++;
			else		negOne++;
		}

		if((posOne - negOne) >= 0){
			if(negOne%2 == 0){
				cout << 0 << endl;
			}
			else{
				cout << 1 << endl;
			}
		}
		else{
			int cnt = 0;
			while((negOne-posOne) > 0){
				negOne--;
				posOne++;
				cnt++;
			}
			if(negOne%2 == 0){
				cout << cnt << endl;
			}
			else{
				cout << (cnt + 1) << endl;
			}
		}
	}
}