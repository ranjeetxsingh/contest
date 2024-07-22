#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int firstSetBit(string s){
	for(int i=0; i<s.length(); i++){
		if(s[i] == '1')	return i;
	}

	return -1;
}

string change(string s, int i, int j){
	char ch = s[j];
	while(j>i){
		s[j] = s[j-1];
		j--;
	}
	s[i] = ch;

	return s;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;

		int i = 0;
		int cost = 0;

		while(i<s.length()){
			int idx = firstSetBit(s);
			if(idx == -1)	break;
			int j = idx;
			while(j<s.length() && s[j]!='0')	j++;
			if(s[j] == '1')	break;
			else{
				s = change(s, idx, j);
				cost += (j - idx + 1);
			}
			i++;
		}
		cout << "i : " << i << "    "; 
		cout << cost << endl;
	}
}