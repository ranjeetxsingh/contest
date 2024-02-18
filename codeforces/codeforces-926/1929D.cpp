#include <iostream>
#include <vector>

using namespace std;
const int MOD = 998244353;

vector<int> adj[300005];
int dp[300005][2];

void dfs(int u, int parent) {
    dp[u][0] = dp[u][1] = 1;
    for (int v : adj[u]) {
        if (v == parent) continue;
        dfs(v, u);
        // Calculate dp[u][0]
        dp[u][0] = (1LL * dp[u][0] * (dp[v][0] + dp[v][1])) % MOD;
        // Calculate dp[u][1]
        dp[u][1] = (1LL * dp[u][1] * (dp[v][0] + dp[v][1])) % MOD;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
        }

        for (int i = 1; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1, 0);

        // Total number of good sets is dp[1][0] + dp[1][1] - 1 (to exclude the case where root is marked as dangerous)
        int ans = (dp[1][0] + dp[1][1] - 1 + MOD) % MOD;
        cout << ans << endl;
    }

    return 0;
}
