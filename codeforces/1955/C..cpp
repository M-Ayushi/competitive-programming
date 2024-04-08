#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, k, t = 0;
	cin >> n >> k;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		t += a[i];
	}
	if (t <= k) {
		cout << n << "\n";
		return;
	}
	ll ans = 0, s = 0, l = (k/2) + (k % 2), r = k/2;
	for (int i = 0; i < n; ++i) {
		s += a[i];
		if (s <= l) ++ans;
		else break;
	}
	s = 0;
	for (int i = n-1; i >= 0; --i) {
		s += a[i];
		if (s <= r) ++ans;
		else break;
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
