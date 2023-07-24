#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, x, y;
	cin >> n;
	map<int, ll> h, v, dr, dl;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		h[x]++;
		v[y]++;
		dr[x-y]++;
		dl[x+y]++;
	}
	ll ans = 0;
	for (auto z : h) {
		ans += 1LL * (z.second*(z.second-1));
	}
	for (auto z : v) ans += 1LL * (z.second*(z.second-1));
	for (auto z : dr) ans += 1LL * (z.second*(z.second-1));
	for (auto z : dl) ans += 1LL * (z.second*(z.second-1));
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
