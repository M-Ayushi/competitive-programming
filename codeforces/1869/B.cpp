#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, a, b;
	cin >> n >> k >> a >> b;
	--a;
	--b;
	ll x[n], y[n];
	for (int i = 0; i < n; ++i) {
		cin >> x[i] >> y[i];
	}
	ll ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);
	ll ma = 4e9, mb = 4e9;

	for (int i = 0; i < k; ++i) {
		ma = min(ma, abs(x[a] - x[i]) + abs(y[a] - y[i]));
		mb = min(mb, abs(x[b] - x[i]) + abs(y[b] - y[i]));
	}

	ans = min(ans, ma+mb);
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
