#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, k;
		cin >> n >> k;

		vector<int> ans;
		int sum = 0;
		int num = 0;
		ans.push_back(0);

		for(int i=0; i<30 && (sum+(1<<i))<=k; i++){
			sum += (1 << i);
			ans[0] += ((1<<i));
		}

		if(n > 1)	ans.push_back(0);
		ans.back() += k - sum;
		while(ans.size() < n)	ans.push_back(0);

		for(auto e: ans)	cout << e << " ";
		cout << endl;	
	}
}