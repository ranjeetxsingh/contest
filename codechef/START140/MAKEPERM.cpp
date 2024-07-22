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

		vi a(n);

		for(auto &e: a)		cin >> e;

		vector<int> freq(n+1, 0);
		
		for(int i=0; i<n; i++){
			freq[a[i]]++;
		}

		int flag = 0;
		int j = 1;
		for(int i=n; i>0; i--){
			if(freq[i]>j){
				flag = 1;
				break;
			}
			j = (j+1) - freq[i];
		}

		if(flag == 1)
			cout << "NO\n";
		else
			cout << "YES\n";

	}
}