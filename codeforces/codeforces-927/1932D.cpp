#include<bits/stdc++.h>
using namespace std;

bool compare(string s1, string s2){
	return s1[1] < s2[1];
}

void addToString(stack<string> trump, stack<string> nonTrump, string &ans){
	while(!trump.empty() || !nonTrump.empty()){
				ans = ans+ nonTrump.top()+" "+trump.top() +"\n";
				trump.pop();
				nonTrump.pop();
			}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char trump;
		cin >> trump;
		
		vector<string> trumpCards, cards;
		for(int i=0; i<2*n; i++){
			string card;
			cin >> card;

			if(card[1]==trump)
				trumpCards.push_back(card);
			else
				cards.push_back(card);
		}

		vector<pair<string, string>> moves;

		for(int i=0; i<cards.size(); i++){
			for(int j=0; j<cards.size(); j++){
				if(j==i)	continue;
				if(cards[i]=="" || cards[j]=="")	continue;
				if(cards[i][1] == cards[j][1]){
					moves.push_back({min(cards[i], cards[j]), max(cards[i], cards[j])});
					cards[i] = "";
					cards[j] = "";
				}
			}
		}

		bool ok = true;

		for(int i=0; i<cards.size(); i++){
			if(cards[i]!=""){
				if(trumpCards.empty()){
					ok = false;
					break;
				}else{
					moves.push_back({cards[i], trumpCards.back()});
					trumpCards.pop_back();
				}
			}
		}

		if(trumpCards.size()%2==1)	ok = false;

		if(!ok){
			cout << "IMPOSSIBLE" << endl;
		}
		else{
			sort(trumpCards.begin(), trumpCards.end());
			for(int i=0; i<trumpCards.size(); i++){
				moves.push_back({trumpCards[i], trumpCards.back()});
				trumpCards.pop_back();
			}

			for(auto x: moves){
				cout << x.first << " " << x.second << endl;
			}
		}
		

		

	}
}