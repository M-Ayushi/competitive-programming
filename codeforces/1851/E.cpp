#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 2e5 + 1;
vector<ll> ans(N);
vector<bool> mn(N);
vector<vector<int>> rec(N);

void calc(int x) {
	ll sum = 0;
	for (auto i : rec[x]) {
		if (mn[i] == 0) {
			calc(i);
		}

		sum += ans[i];
	}

	ans[x] = min(ans[x], sum);
	mn[x] = 1;
}

void solve() {
	int n, k, x, m;
	cin >> n >> k;
	int c[n+1];
	//vector<int> ans(n+1, -1);
	// vector<vector<int>> rec(n+1);
	// rec.clear();
	for (int i = 1; i <= n; ++i) {
		cin >> c[i];
		ans[i] = c[i];
		mn[i] = 0;
		rec[i].clear();
	}
	for (int i = 0; i < k; ++i) {
		cin >> x;
		ans[x] = 0;
		mn[x] = 1;
		c[x] = 0;
	}
	for (int i = 1; i <= n; ++i) {
		cin >> m;
		for (int j = 0; j < m; ++j) {
			cin >> x;
			rec[i].push_back(x);
		}
		if (m == 0) mn[i] = 1;
	}

	// for (int i = 1; i <= n; ++i) {
	// 	cout << ans[i] << " " << mn[i] << "\n";
	// }

	for (int i = 1; i <= n; ++i) {
		if (mn[i] == 0) {
			calc(i);
			// ans[i] = min(ans[i], c[i]);
		}
		cout << ans[i] << " ";
	}
	cout << "\n";
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
