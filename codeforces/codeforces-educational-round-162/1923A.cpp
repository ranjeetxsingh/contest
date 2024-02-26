#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);

		for(auto &e: a)
			cin >> e;

		int left = -1;
		
		for(int i=0; i<n; i++){
			if(a[i]==1){
				left = i;
				break;
			}
		}
		int right = -1;
		for(int i=left+1; i<n; i++){
			if(a[i]==1){
				right = i;
			}
		}

		if(right == -1)
			cout << 0 << endl;
		else{
			int cnt = 0;
			for(int i=left; i<=right; i++){
				if(a[i]==0)
					cnt++;
			}
			cout << cnt << endl;
		}

	}
}