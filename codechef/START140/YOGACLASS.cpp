#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, x, y;
		cin >> n >> x >> y;
		
		int e1 = n * x;
		int e2 = (n/2)*y + (n%2)*x;
		cout << max(e1, e2) << endl;
	}
}