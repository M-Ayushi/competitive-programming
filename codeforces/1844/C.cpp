#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a[n], o = 0, e = 0, mx = -1e9;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	for (int i = 0; i < n; ++i) {
		if (a[i] > 0) {
			if (i % 2) o += a[i];
			else e += a[i];
		}
	}
	if (mx < 0) cout << mx << "\n";
	else cout << max(e, o) << "\n";
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
