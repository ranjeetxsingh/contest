#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, m;
		cin >> n >> m;

		deque<int> a;

		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			a.push_back(x);
		}

		string s;
		cin >> s; 

		vector<int> v;

		for(int i=0; i<n; i++){
			if(s[i]=='L'){
				v.push_back(a.front());
				a.pop_front();
			}
			else{
				v.push_back(a.back());
				a.pop_back();
			}
		}

		reverse(v.begin(), v.end());

		vector<int> ans;
		int mul = 1;

		for(auto e: v){
			mul *= e;
			mul %= m;
			ans.push_back(mul);
		}

		reverse(ans.begin(), ans.end());

		for(auto x: ans)
			cout << x << " ";

		cout<<endl;

	}
}