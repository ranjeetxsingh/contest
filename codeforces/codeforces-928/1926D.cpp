#include<bits/stdc++.h>
using namespace std;

const int MASK = INT_MAX;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<int> a(n);
		for(auto &e: a)
			cin >> e;
		multiset<int> ms;
		int answer = 0;
		for(auto &x: a){
			if(ms.find(MASK^x) != ms.end()){
				answer++;
				ms.erase(ms.find(MASK^x));
			}
			else{
				ms.insert(x);
			}
		}


		cout << (answer + ms.size()) << endl;
	}
}