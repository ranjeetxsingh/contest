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
		string suit;
		cin >> suit;
		vector<string> cards(2*n);
		for(int i=0; i<2*n; i++)
			cin >> cards[i];
		int c=0, d=0, h=0, s=0;
		sort(cards.begin(), cards.end(), compare);
		// for(auto x: cards){
		// 	if(x[1]=='C')	c++;
		// 	else if(x[1]=='D')	d++;
		// 	else if(x[1]=='H')	h++;
		// 	else	s++;
		// }
		// int roundRemaining = n;
		// if(suit[0]=='C'){
		// 	roundRemaining = roundRemaining - (c+1)/2;
		// 	roundRemaining = roundRemaining - (d/2) - (h/2) - (s/2); 
		// }
		// else if(suit[0]=='D'){
		// 	roundRemaining = roundRemaining - (d+1)/2;
		// 	roundRemaining = roundRemaining - (c/2) - (h/2) - (s/2); 
		// }
		// else if(suit[0]=='H'){
		// 	roundRemaining = roundRemaining - (h+1)/2;
		// 	roundRemaining = roundRemaining - (d/2) - (c/2) - (s/2); 
		// }else{
		// 	roundRemaining = roundRemaining - (s+1)/2;
		// 	roundRemaining = roundRemaining - (d/2) - (h/2) - (c/2); 
		// }

		stack<string> trump, nonTrump;

		for(auto x: cards){
			if(x[1] == suit[0])
				trump.push(x);
			else
				nonTrump.push(x);
		}
		int st1 = trump.size();
		int st2 = nonTrump.size();
		string ans="";
		int flag=0;
		if(st1==st2){
			addToString(trump, nonTrump, ans);
			cout << ans;
		}else{
			
			// cout << "trump size: " << trump.size() << endl << "non trump size: " << nonTrump.size() << endl;
			while(!trump.empty() || !nonTrump.empty()){
				if(trump.size()>=2){
					string card1 = trump.top();
					trump.pop();
					string card2 = trump.top();
					trump.pop();
					if(card1[0]>card2[0])
						ans = ans+card2+" "+card1+"\n";
					else
						ans=ans+card1+" "+card2+"\n";
					
				}else{
					if(trump.size()==1){
						ans=ans+nonTrump.top()+" ";
						nonTrump.pop();
						ans=ans+trump.top()+"\n";
						trump.pop();
						
						
					}else{
						string card1 = nonTrump.top();
						nonTrump.pop();
						string card2 = nonTrump.top();
						nonTrump.pop();
						if(card1[1]!=card2[1]){
							flag=1;
							break;
						}else{
							if(card1[0]>card2[0])
								ans = ans+card2+" "+card1+"\n";
							else
								ans=ans+card1+" "+card2+"\n";
						}
						
					}
				}
			}
			if(flag == 1){
					cout << "IMPOSSIBLE" << endl;
			}
			else{
				cout << ans;
			}
		}

		

	}
}