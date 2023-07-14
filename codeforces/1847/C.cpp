#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

// const int N = 2e9;
const int L = 31;
// vector<array<int, 2>> trie;

void solve() {
	vector<array<int, 2>> trie;
	int n, cur = 0, sz = 1, ans = 0, op, index = 0, a;
	trie.push_back({0, 0});

	for (int j = L-1; j >= 0; --j) {
		if (trie[index][0] == 0) {
			trie[index][0] = sz;
			trie.push_back({0,0});
			++sz;
		}
		index = trie[index][0];
	}

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		cur = cur ^ a;
		op = 0, index = 0;
		for (int j = L-1; j >= 0; --j) {
			if ((1 << j) & cur) {
				if (trie[index][0] != 0) {
					index = trie[index][0];
				}
				else {
					index = trie[index][1];
					op += (1 << j);
				}
			}
			else {
				if (trie[index][1] != 0) {
					index = trie[index][1];
					op += (1 << j);
				}
				else {
					index = trie[index][0];
				}
			}
		}
		ans = max(ans, cur^op);

		index = 0;
		for (int j = L-1; j >= 0; --j) {
			if ((1 << j) & cur) {
				if (trie[index][1] == 0) {
					trie[index][1] = sz;
					trie.push_back({0,0});
					++sz;
				}
				index = trie[index][1];
			}
			else {
				if (trie[index][0] == 0) {
					trie[index][0] = sz;
					trie.push_back({0,0});
					++sz;
				}
				index = trie[index][0];
			}
		}
	}
	cout << ans << "\n";

	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}
