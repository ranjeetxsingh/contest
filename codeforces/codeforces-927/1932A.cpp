#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<char> v(n);

		for(int i=0; i<n; i++)
			cin >> v[i];

		int coins = 0;

		for(int i=0; i<n; i++){
			if(v[i] == '@')
				coins++;
			if(i==0 && v[i]=='*')
				if(1<n && v[1]=='*')	break;
			if((i+1)<n && v[i]=='.')	continue;
			if((i+1)<n && v[i+1]=='*' && (i+2)<n && v[i+2]=='*')	break;
			if((i+1)<n && v[i+1]=='*')	i++;
		}
		cout << coins <<
	}

	return 0;
}