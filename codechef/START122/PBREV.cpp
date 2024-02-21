#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(auto &e: a)
			cin >> e;
		int flag = 0;
		for(int x: a){
			if(x<=4){
				flag = 1;
				break;
			}
		}

		if(flag==1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}