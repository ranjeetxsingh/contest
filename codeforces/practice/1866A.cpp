#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int n;
	cin >> n;

	vi a(n);

	int minm = INT_MAX;

	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		minm = min(minm, abs(x));
		a[i] = x;
	}

	cout << minm << "\n";
}