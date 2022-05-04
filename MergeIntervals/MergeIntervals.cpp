#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void mergeInterval(vector<pair<int,int>>& v) {
	sort(v.begin(), v.end()); // O(nlgn)

	int idx(0);
	while (idx < (v.size() - 1)) {
		if (v[idx].second >= v[idx + 1].first) {
			// merge
		}
		else {
			// continue
		}
	}
}

int main() {
	
	vector<pair<int, int>> v = { {1,5}, {3,7}, {10,15}, {8,16} };
	mergeInterval(v);

	
}