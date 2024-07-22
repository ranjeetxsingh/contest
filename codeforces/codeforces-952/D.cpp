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
		string grid[n];
		
		for(int i=0; i<n; i++){
			cin >> grid[i];
		}
		vector<int> a;
		int col = -1;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(grid[i][j] == '#'){
					a.push_back(i+1);
					if(col == -1)	col = j;
					j = m;
				}
			}
		}

		cout << a[a.size()/2] << " " << col+1 << endl;

	}
}