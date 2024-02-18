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

		int num[n];

		for(int i=0; i<n; i++){
			num[i] = s[i] - 48;
		}

		if(n==1){
			cout << 8 << endl;
		}
		else if(n == 2){
			int div = num[0]*10 + num[1];
			if(div<=19)
				cout << 16 << endl;
			else if(div <= 29)
				cout << 24 << endl;
			else if( div <= 39)
				cout << 32 << endl;
			else if(div<=49)
				cout << 48 << endl;
			else if(div<=59)
				cout << 56 << endl;
			else if(div<=69)
				cout << 64 << endl;
			else if(div<=79)
				cout << 72 << endl;
			else if(div<=89)
				cout << 88 << endl;
			else
				cout << 96 << endl;
		}
		else{
			int div = num[n-1] + num[n-2]*10 + num[n-3]*100;
			if(div % 8 == 0)
				cout << s << endl;
			else{
				for(int i = 0; i < n; i++){
					int x = num[i];
					int div1 = num[n-1] + num[n-2]*10 + num[i]*100;
					int div2 = num[n-1] + num[i]*10 + num[n-3]*100;
					int div3 = num[i] + num[n-2]*10 + num[n-3]*100;

					if(div1 % 8 == 0){
						num[n-3] = num[i];
						break;
					}
					else if(div2 % 8 == 0){
						num[n-2] = num[i];
						break;
					}
					else if(div3 % 8 == 0){
						num[n-1] = num[i];
						break;
					}

				}

				string ans = "";
				for(auto x: num)
					ans = ans + to_string(x);
				cout << ans << endl;
			}
		}
	}


	return 0;
}