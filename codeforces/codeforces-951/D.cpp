#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;


bool kproper(string s, int k){
	int n = s.length();
	for(int i=0; i<k; i++){
		if(i<k-1)	if(s[i]!=s[i+1])	return false;
		if(s[i+k]==s[i])	return false;
	}
	cout << s << endl;
	return true;
}


bool operateOnString(string s, int p, int k){
	reverse(s.begin(), s.begin()+p);
	s = s.substr(p) + s.substr(0, p);
	// cout << s << endl;
	return kproper(s, k);
}


int main(){
	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;

		int flag = 0;

		for(int i=1; i<=n; i++){
			if(operateOnString(s, i, k)){
				cout << i << endl;
				flag = 1;
				break;
			}
		}

		if(flag==0)
			cout << -1 << endl;

	}
}