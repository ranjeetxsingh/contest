#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;


vector<int> bfsTraversal(int n, const vector<vector<int>>& graph, const vector<int>& weights, int minWeightIndex) {
    vector<int> order;
    vector<bool> visited(n, false);
    queue<int> bfs;
    

    bfs.push(minWeightIndex);
    visited[minWeightIndex] = true;
    order.push_back(minWeightIndex);
    
    // Perform BFS
    while (!bfs.empty()) {
        int node = bfs.front();
        bfs.pop();
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                order.push_back(neighbor);
                bfs.push(neighbor);
            }
        }
    }
    
    return order;
}

vector<int> revAdjInd(const vector<int>& order) {
    vector<int> rev(order.begin() + 1, order.end());
    reverse(rev.begin(), rev.end());
    for (int& i : rev) {
        i++; 
    }
    return rev;
}


int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
        cin >> n;
        
        vector<vi> graph(n);
        vi weights(n);
        
        for (int j = 0; j < n; ++j) {
            cin >> weights[j];
        }

        for (int j = 0; j < n - 1; ++j) {
            int a, b;
            cin >> a >> b;
            graph[a - 1].push_back(b - 1);
            graph[b - 1].push_back(a - 1);
        }
        
        int minWeightIndex = min_element(weights.begin(), weights.end()) - weights.begin();
        
        vector<int> order = bfsTraversal(n, graph, weights, minWeightIndex);
        
        vector<int> answer = revAdjInd(order);
        
        cout << answer.size() << endl;
        for (int j = 0; j < answer.size(); ++j) {
            cout << answer[j] << " ";
        }
        cout << endl;
	}
}