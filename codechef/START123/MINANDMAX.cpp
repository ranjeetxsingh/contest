#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		long long int x = n/2;

		long long int sum = (x*(x+1))/2;
		sum = sum*2;

		if(n%2==0)
			cout << sum << endl;
		else{
			sum = sum + (x+1);
			cout << sum << endl;
		}
	}
}