#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> a(n, vector<int> (m));
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}

		int dx[4] = {+1, 0, -1, 0};
		int dy[4] = {0, +1, 0, -1};

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				
				int isGreater = 0;
				int maxi = INT_MIN;
				
				for(int k=0; k<4; k++){
					int nrow = i + dx[k];
					int ncol = j + dy[k];
					if(nrow<n && nrow>=0 && ncol<m && ncol>=0){
						maxi = max(maxi, a[nrow][ncol]);
					}
				}
				if(a[i][j]>maxi){
						a[i][j] = maxi;
				}
					
			}
		}

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

	}
}