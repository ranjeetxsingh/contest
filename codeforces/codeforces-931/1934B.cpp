#include<bits/stdc++.h>
using namespace std;

int minCoinsNeeded(int n) {
    vector<int> coins = {1, 3, 6, 10, 15};
    vector<int> dp(n + 1, n + 1); // Initialize with a value larger than the maximum possible number of coins needed
    dp[0] = 0;

    for (int coin : coins) {
        for (int i = coin; i <= n; ++i) {
            dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }

    return dp[n];
}

int minCoinsNeeded2(int n) {
    // Fixed denominations
      vector<int> denominations = {1, 3, 6, 10, 15};

    // Array to store counts for each value from 0 to 15
    vector<int> counts(16, 0);

    // Initialize the counts for denominations
    for (int coin : denominations) {
        counts[coin] = 1;
    }

    // Compute the counts for values from 1 to n
    for (int i = 1; i <= n; ++i) {
        if (counts[i] == 0) {
            int minCount = n;
            for (int coin : denominations) {
                if (i - coin >= 0) {
                    minCount = min(minCount, counts[i - coin] + 1);
                }
            }
            counts[i] = minCount;
        }
    }

    return counts[n];
}

int main(){
	int t;
	cin >> t;

	while(t--){
		long long int n;
		cin >> n;
		

		cout << minCoinsNeeded2(n) << endl;

	}
}