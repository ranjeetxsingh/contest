#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		string s;
		cin >> s;

		if(n==2){
			int ans = (s[0]-'0')*10 + (s[1]-'0');
			cout << ans << endl;
		}	
		else{
			int ans = 0;
			int flag = 0;
			for(int i=0; i<n; i++){
				if(s[i]=='0'){
					flag = -1;
					break;
				}
				if(s[i]!='1'){
					flag = 1;
					break;
				}
			}

			if(flag==-1){
				cout << 0 << endl;
			}
			else if(flag==0){
				cout << 1 << endl;
			}
			else{
				for(int i=0; i<n; i++){
					if(s[i]!='1'){
						ans = ans + (s[i]-'0');
					}
				}
				cout << ans << endl;
			}
		}

	}
}