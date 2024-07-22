#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, m;
		cin >> n >> m;

		string s;
		cin >> s;

		vi a(m);
		for(auto &e: a)	cin >> e;

		string c;
		cin >> c;

		sort(c.begin(), c.end());
		sort(a.begin(), a.end());

		vector<int> v;
		set<int> st;

		for(int x: a)	st.insert(x);
		
		set<int>::iterator itr;
		
		for(itr=st.begin(); itr!=st.end(); itr++){
			v.push_back(*itr);
		}

		for(int i=0; i<v.size(); i++){
			s[v[i]-1] = c[i];
		}
		
		cout << s << endl;

	}
}