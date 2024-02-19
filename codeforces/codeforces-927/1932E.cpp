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

		for(int i=0; i<n; i++){
			if(s[i]!=0)	break;
			s = s.substr(i+1);
		}

		int pref[n];
		pref[0]=s[0]-'0';
		for(int i=1; i<n; i++)	pref[i] = pref[i-1]+(s[i]-'0');

		int curr = n-1;
		vector<int> v;
		int carry = 0;

		while(true){
			if(carry==0 && curr<0)	break;
			int sums=carry;

			if(carry>=0)	sums += pref[curr];

			v.push_back(sums%10);
			carry=sums/10;
			curr--;
		}

		while(v.back()==0)	v.pop_back();
		reverse(v.begin(), v.end());

		for(auto x: v)
			cout << x;
		cout<<endl;
	}
}