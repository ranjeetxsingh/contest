#include<bits/stdc++.h>
using namespace std;

long long int solve(int n, int m, int x, int y, int l){
	
	long long int rows = 1;
	long long int cols = 1;
	int up = x - l;
	while(up > 0){
		up = up - l;
		rows++;
	}

	int down = x + l;
	while(down <= n){
		down = down + l;
		rows++;
	}

	int left = y - l;
	while(left > 0){
		left = left - l;
		cols++;
	}

	int right = y + l;
	while(right <= m){
		right = right + l;
		cols++;
	}

	return (long long int)(((long long int)rows)*((long long int)cols));
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,x,y,l;
		cin >> n >> m >> x >> y >> l;
		
		
		if(l==1)
			cout << (long long int)(((long long int)n)*((long long int)m)) << endl;
		else{
			// cout << solve(n, m, x, y, l) << endl;
			long long int upperRows = (x-1)/l;
			long long int downRows = (n-x)/l;
			long long int totalRows = upperRows + downRows + 1;
			long long int leftCols = (y-1)/l;
			long long int rightCols = (m-y)/l;
			long long int totalCols = leftCols + rightCols + 1;

			cout << (long long int)(((long long int)totalCols)*((long long int)totalRows)) << endl;
		}


	}
}