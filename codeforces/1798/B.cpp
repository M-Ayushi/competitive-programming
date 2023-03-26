#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int d, n, a;
	cin >> d;
	vector<vector<int>> p(d);
	for (int i = 0; i < d; ++i) {
		cin >> n;
		p[i].push_back(n);
		for (int j = 0; j < n; ++j) {
			cin >> a;
			p[i].push_back(a);
		}
	}

	map<int, bool> g;
	vector<int> ans;
	bool f;
	for (int i = d-1; i >= 0; --i) {
		f = 0;
		for (int j = 1; j <= p[i][0]; ++j) {
			if (f == 0 && g[p[i][j]] == 0) {
				ans.push_back(p[i][j]);
				f = 1;
			}
			g[p[i][j]] = 1;
		}
		// for (int k = 1; k < p[i][0]; ++k) {
		// 	cout << g[p[i][k]] << " ";
		// }
		// cout << "\n";
		if (f == 0) break;
	}

	if (sz(ans) == d) {
		for (int i = d-1; i >= 0; --i) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	else cout << "-1\n";

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