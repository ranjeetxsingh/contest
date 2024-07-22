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
		for(auto &e: a)	cin>>e;

		int mini = -1;
		int minval = INT_MAX;
		int sorted = 1;
		for(int i=1; i<n; i++){
			if(a[i]-a[i-1] < 0){
				sorted = 0;
				break;
			}
			if(a[i]-a[i-1] < minval){
				minval = a[i] - a[i-1];
				mini = i-1;
			}
		}

		if(sorted == 0){
			cout << 0 << endl;
		}else{
			if(a[mini] == a[mini+1])	cout << 1 << endl;
			else{
				// int avg = a[mini] + (a[mini+1]-a[mini])/2;
				cout << minval/2 + 1 << endl;
			}
		}
	}
}