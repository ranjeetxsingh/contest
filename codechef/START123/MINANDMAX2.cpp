#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		long long int x = n;

		long long int sum = (x*(x+1))/2;
		sum = sum - 1 + n;
		cout << sum << endl;
	}
}