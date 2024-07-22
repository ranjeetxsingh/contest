#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int x, y;
		cin >> x >> y;
		int ans = (1000 - 10*x)/(100-y);
		if(ans <= 10)
			cout << 1 << endl;
		else
			cout << ans - 10  << endl;
	}
}