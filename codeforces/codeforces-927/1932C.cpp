#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, m;
		cin >> n >> m;

		vector<int> a(n);

		for(int i=0; i<n; i++)
			cin >> a[i];

		string s;
		cin >> s; 

		long long int prod = 1;

		for(auto x: a)
			prod = prod*((long long int) x);

		int k=0, i=0, j=n-1;

		while(k<n){
			cout << (prod % m) << " ";
			if(s[k]=='L'){
				prod = prod/a[i++];
			}
			else{
				prod = prod/a[j--];
			}
			k++;
		}

		cout<<endl;

	}
}