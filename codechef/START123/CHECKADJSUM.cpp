#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n,q;
		cin >> n >> q;
		vector<int> a(n);
		for(auto &e: a)
			cin >> e;
		vector<int> p(q);
		for(auto &e: p)
			cin >> e;

		sort(a.begin(), a.end());
		int temp = a[n-1];
		a[n-1] = a[1];
		a[1] =  temp;
		long long int maxSum = 0;
		for(int i=0; i<n-1; i++)
			maxSum = maxSum + (a[i] + a[i+1]);

		sort(a.begin(), a.end(), greater<int>());
		temp = a[n-1];
		a[n-1] = a[1];
		a[1] =  temp;
		long long int minSum = 0;
		for(int i=0; i<n-1; i++)
			minSum = minSum + (a[i] + a[i+1]);

		for(int i=0; i<q; i++){
			int x = p[i];

			if(x>=minSum && x<=maxSum){
				if(x==maxSum){
					sort(a.begin(), a.end());
					temp = a[n-1];
					a[n-1] = a[1];
					a[1] =  temp;
					for(auto x: a)
						cout << x << " ";
					cout << endl;
				}else if(x==minSum){
					sort(a.begin(), a.end(), greater<int>());
					temp = a[n-1];
					a[n-1] = a[1];
					a[1] =  temp;
					for(auto x: a)
						cout << x << " ";
					cout << endl;
				}else{
					
				}
			}
			else{
				cout << (-1) << endl;
			}
		}



	}
}