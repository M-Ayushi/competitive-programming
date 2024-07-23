#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, m;
	cin >> n >> m;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	int x = 0, y = 0;
	ll s = 0, ans = 0;
	while (y < n) {
		s += a[y];
		++y;
		while (s > m || (a[y-1]-a[x]) > 1) {
			s -= a[x];
			++x;
		}
		ans = max(ans, s);
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
