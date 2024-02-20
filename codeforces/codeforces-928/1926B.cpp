#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<string> grid(n);

		for(auto &e: grid)
			cin >> e;

		unordered_set<int> st;

		for(auto x: grid){
			int cnt = 0;
			for(int i=0; i<n; i++){
				if(x[i]=='1')	cnt++;
			}
			st.insert(cnt);
			if(st.size()>2)	break;
		}

		
		if(st.size()<=2)
			cout << "SQUARE" << endl;
		else
			cout << "TRIANGLE" << endl;
	}
}