#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){

	int n;
	cin >> n;

	for(int i=0; i<2*n-1; i++){
		for(int j=0; j<2*n-1; j++){
			int top = i;
			int left = j;
			int right = (2*n - 2) - j;
			int down = (2*n - 2) - i;
			cout << (n - min({top, left, right, down}));
		}
		cout << "\n";
	}
		
}

/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555

*/