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
		for(auto &e: a)
			cin >> e;

		vi b;
		b.push_back(a[0]);

		for(int i=1; i<n; i++){
			if(a[i-1]<=a[i]){
				b.push_back(a[i]);
			}
			else{
				b.push_back(a[i]);
				b.push_back(a[i]);
			}
		}

		cout << b.size() << "\n";
		for(auto &e: b)
			cout << e << " ";
		cout << endl;
	}
}