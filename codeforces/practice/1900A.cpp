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

		int flag = 0;
		int cnt = 0;

		for(int i=1; i<n-1; i++){
			if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
				flag = 1;
				break;
			}
			if(s[i]=='.')	cnt++;
		}

		if(flag==1){
			cout << 2 << endl;
		}
		else{
			if(s[0]=='.')	cnt++;
			if(n>1 && s[n-1]=='.')	cnt++;
			cout << cnt << endl;
		}

	}
}