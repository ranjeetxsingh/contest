#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int i=1, j=n;
		vector<int> v(n);
		set<int> st;
		for(int i=1; i<=n; i++)
			st.insert(i);

		for(int i=1; i<=n; i++){
			if(i%2==1){
				cout << *st.begin() << " ";
				st.erase(st.begin());
			}
			else{
				cout << *st.rbegin() << " ";
				st.erase(--st.end());
			}
		}
		cout << endl;
		
	}

	return 0;
}