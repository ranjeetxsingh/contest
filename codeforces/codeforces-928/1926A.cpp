#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		vector<int> v(2, 0);

		for(auto x: s){
			if(x == 'A')
				v[0]++;
			else
				v[1]++;
		}

		if(v[0]>v[1])
			cout << "A" << endl;
		else
			cout << "B" << endl;
	}
}