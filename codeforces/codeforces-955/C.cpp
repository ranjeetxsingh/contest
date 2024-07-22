#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		
		int n,l,r;
		cin >> n >> l >> r;
		
		vi a(n);
		for(auto &e: a)	cin >> e;
		
		int sum = 0;
		int wins = 0;
		
		int i = 0, j = 0, prevj = -1;

		while(j<n){
			if(!(prevj == j)){
				sum += a[j];
				prevj = j;
			}
			if(sum>=l && sum<=r){
				wins++;
				sum = 0;
				j++;
				i = j;
			}
			else if(sum > r){
				sum -= a[i++];
				if(sum == 0)	j++;
			}
			else if(sum < l){
				j++;
			}
		}
		
		cout << wins << endl;
	}
}