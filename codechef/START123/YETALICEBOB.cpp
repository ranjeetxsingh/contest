#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, a, b;
		cin >> n >> a >> b;

		if(n <= a)
			cout << "Alice" << endl;
		else if(a == b)
			cout << "Bob" << endl;
		else
			cout << "Bob" << endl;

	}
}