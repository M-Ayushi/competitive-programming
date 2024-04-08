#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	queue<int> v;
	bool poss;
	for (int i = n; i >= 0; --i) {
		while (!v.empty()) v.pop();
		poss = 1;
		for (int j = 0; j < n; ++j) {
			if ((s[j]-'0'+sz(v)) % 2 == 0) {
				if (j > (n-i)) {
					poss = 0;
					break;
				}
				v.push(j+i-1);
			}
			if (!v.empty() && v.front() == j) v.pop();
		}
		if (poss) {
			cout << i << "\n";
			return;
		}
	}
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
