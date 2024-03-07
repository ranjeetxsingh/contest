#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int cnt = 0;

		while(n>0){
			if(n&1 == 1)
				cnt++;
			n = n>>1;
		}
		if((cnt%2)==0)
			cout << "EVEN" << endl;
		else
			cout << "ODD" << endl;
	}
}