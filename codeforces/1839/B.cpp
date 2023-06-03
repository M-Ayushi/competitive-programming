#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, a, c = 0;
	ll ans = 0, b;
	cin >> n;
	vector<vector<ll>> v(n+1);
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		v[a].push_back(b);
	}
	for (int i = 1; i <= n; ++i) {
		c += min(sz(v[i]), i);
		sort(v[i].begin(), v[i].end());
		for (int j = sz(v[i])-1; j >= 0 && c > 0; --j) {
			--c;
			ans += v[i][j];
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