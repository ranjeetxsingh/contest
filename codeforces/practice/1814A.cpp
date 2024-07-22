#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	long long int t;
	cin >> t;

	while(t--){
		long long int n, k;
		cin >> n >> k;
		if(!(n&1) || (n&1 && k&1))	cout << "YES\n";
		else				cout << "NO\n";		
	}
}