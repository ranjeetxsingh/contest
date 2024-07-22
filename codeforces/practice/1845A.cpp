#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, k, x;
		cin >> n >> k >> x;
		if((k==1 && x==1) || (k==2 && x==1 && n&1))
			cout << "NO\n";
		else{
			cout << "YES\n";
			if(x!=1){
				cout << n << endl;
				while(n--)	cout << 1 << " ";
			}else{
				cout << n/2 << endl;
				if(n&1)
					cout << 3 << " ";
				else
					cout << 2 << " ";
				n = n/2 - 1;
				while(n--)	cout << 2 << " ";
			}
			cout << endl;
		}
	}
}