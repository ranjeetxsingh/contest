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

		vi h(n);

		for(auto &e: h)		cin >> e;

		int ans = 0;
		while(h[0]>0){
			int idx = -1;
			int largest = -1;
			for(int i=0; i<n; i++){
				if(largest < h[i]){
					largest = h[i];
					idx = i;
				}
			}
			if(idx == n){
				
			}
			else if(idx == 0){

			}
			else{
				
			}
		}

		cout << ans << endl;

	}
}