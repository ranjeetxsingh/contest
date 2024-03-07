#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string rev = "";
		for(char c: s){
			rev = c + rev;
		}
		vector<string> a = {s, rev, s+rev, rev+s};
		sort(a.begin(), a.end());

		if(s > rev){
			if(n%2==0)
				cout << a[1] << endl;
			else
				cout << a[0] << endl;
		}
		else{
			cout << a[0] << endl;
		}
	}
}