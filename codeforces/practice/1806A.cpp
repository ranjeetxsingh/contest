#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		long long int a,b,c,d;
		cin >> a >> b >> c >> d;

		if(d<b)	cout << -1 << endl;
		else
			if(c > (a + d - b))		cout << -1 << endl;
			else
				cout << ((d-b) + (a+d-b-c)) << endl;
	}
}