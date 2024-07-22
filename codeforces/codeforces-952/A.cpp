#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		string a, b;
		cin >> a >> b;
		char ch1 = a[0];
		char ch2 = b[0];
		a[0] = ch2;
		b[0] = ch1;

		cout << a << " " << b << endl;
	}
}