#include<bits/stdc++.h>
using namespace std;


int countOddNumbers(int N) {
    if (N % 2 == 0) {
        return N / 2;
    } else {
        return (N + 1) / 2;
    }
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, k;

		cin >> n >> k;

		unordered_set<int> st;
		
		int N = countOddNumbers(n);

		long long int multiplier = 0;
		int x = k;
		long long int val;
		while(x>0 && st.size()!=n){
			multiplier++;
			for(int i=1; i <=N; i++){
				
				val = multiplier*((2*i)-1);
				
				if(val > n){
					i = N+1;
					continue;
				}
				x--;
				st.insert(val);
			}
		}
		auto itr = st.begin();
		cout << *itr << endl; 

	}
}