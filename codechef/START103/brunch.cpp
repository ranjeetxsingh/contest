#include<bits/stdc++.h>
using namespace std;


int main(){

	int t;
	cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;

		int neighbours = x/y;

		if(neighbours>=20)
			cout << 20 << endl;
		else
			cout << neighbours << endl;
	}


	return 0;
}