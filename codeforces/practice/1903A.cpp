#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &v){
	for(int i=1; i<v.size(); i++){
		if(v[i]<v[i-1])
			return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;

	while(t--){
		
		int n, k;
		cin >> n >> k;
		
		vector<int> a(n);
		
		for(auto &e: a)
			cin >> e;

		if(isSorted(a))
			cout << "YES" << endl;
		else{
			if(k>=2)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}

	}
}
