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
		if(k >= n-1)
			cout << 1 << endl;
		else
			cout << n << endl;
	}
}