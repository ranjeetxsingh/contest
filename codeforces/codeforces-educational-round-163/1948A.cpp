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
		if(n%2==0){
			string ans = "";
			for(int i=1;i<=n/2; i++){
				if(i%2==0){
					ans = ans + "AA";
				}else{
					ans = ans + "BB";
				}
			}
			cout << "YES\n";
			cout << ans << endl;
		}
		else{
			cout << "NO\n";
		}
	}
}