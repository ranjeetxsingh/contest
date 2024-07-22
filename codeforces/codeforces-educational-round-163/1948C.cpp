#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool dfs(vector<vector<int>>& vis, string srow[], int arrow, int row, int col, int n, int delrow[], int delcol[]){
	vis[row][col] = 1;
	if(row==1 && col==n-2)
		return true;
	if(arrow==0)
		for(int i=0; i<4; i++){
			int nrow = row + delrow[i];
			int ncol = col + delcol[i];
			if(nrow>=0 && nrow<2 && ncol>=0 && ncol<n && !vis[nrow][ncol]){
				if(dfs(vis, srow, !arrow, nrow, ncol, n, delrow, delcol))	return true;
			}
		}
	else{
		if(srow[row][col]=='<' && !vis[row][col-1])
			if(dfs(vis, srow, !arrow, row, col-1, n, delrow, delcol))	return true;
		else
			if(dfs(vis, srow, !arrow, row, col+1, n, delrow, delcol))	return true;
	}

	return false;

}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		string row[2];
		cin >> row[0];
		cin >> row[1];

		int delrow[] = {-1, +1, 0, 0};
		int delcol[] = {0, 0, -1, +1};
		vector<vector<int>> vis(2, vector<int>(n, 0));
		int arrow = 0;
		if(dfs(vis, row, arrow, 0, 0, n, delrow, delcol))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
}