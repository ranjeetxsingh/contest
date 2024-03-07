#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		map<char, int> freqMap;
		
		for(char c: s){
			freqMap[c]++;
		}

		int ans = INT_MAX;

		for(auto it: freqMap){
			char ch = it.first;
			int freq = it.second;
			int l = 0;
			int r = freq-1;
			int c = 0;

			for(int i=l; i<=r; i++){
				if(ch == s[i])
					c++;
			}

			ans = min(ans, freq-c);

			while(r<n){
				if(s[l]==ch)
					c--;
				l++;
				if((r+1)<n && s[r+1]==ch)
					c++;
				r++;
				ans = min(ans, freq-c);
			}
		}

		cout << ans << endl;

	}
}