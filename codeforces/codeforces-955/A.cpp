#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int a,b,c,d;
		cin >> a >> b;
		cin >> c >> d;
		if((a<b && c>d) || (a>b && c<d))
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}