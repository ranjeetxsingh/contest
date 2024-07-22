#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

// Function to count occurrences of elements modulo modValue
unordered_map<int, int> countModuloOccurrences(const vector<int>& elements, int modValue) {
    unordered_map<int, int> modCounts;
    for (int element : elements) {
        int modElement = element % modValue;
        modCounts[modElement]++;
    }
    return modCounts;
}

// Function to calculate the number of valid pairs
long long calculateValidPairs(const unordered_map<int, int>& candyMods, const unordered_map<int, int>& chocolateMods, int modValue) {
    long long count = 0;
    for (auto it = candyMods.begin(); it != candyMods.end(); ++it) {
        int candyMod = it->first;
        int candyCount = it->second;
        int chocolateMod = (modValue - candyMod) % modValue;
        
        if (chocolateMods.find(chocolateMod) != chocolateMods.end()) {
            count += (long long)candyCount * chocolateMods.at(chocolateMod);
        }
    }
    return count;
}



int main(){
	int t;
	cin >> t;

	while(t--){
		int numBoxes, numChildren;
        cin >> numBoxes >> numChildren;
        
        vector<int> candies(numBoxes);
        vector<int> chocolates(numBoxes);
        
        for (int i = 0; i < numBoxes; ++i) {
            cin >> candies[i];
        }
        
        for (int i = 0; i < numBoxes; ++i) {
            cin >> chocolates[i];
        }
        
        unordered_map<int, int> candyMods = countModuloOccurrences(candies, numChildren);
        unordered_map<int, int> chocolateMods = countModuloOccurrences(chocolates, numChildren);
        
        long long result = calculateValidPairs(candyMods, chocolateMods, numChildren);
        
        cout << result << endl;

	}
}