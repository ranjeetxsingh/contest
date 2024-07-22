#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int a,b,c;
		cin >> a >> b >> c;

		bool winner = true;
		// if true First is winner
		// if false Second is winner

		if(c&1){
			winner = true;
		}
		else{
			winner = false;
		}

		if(winner){
			if(a>=b)
				cout << "First\n";
			else
				cout << "Second\n";
		}
		else{
			if(b>=a)
				cout << "Second\n";
			else
				cout << "First\n";
		}

	}
}