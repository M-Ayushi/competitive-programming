#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int m;
	ll x = 0, y = 0, z = 0;
	cin >> m;
	int n = m*2;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i = 0; i < n-1; ++i) {
		x += abs(a[i]+1);
		y += abs(a[i]);
		z += abs(a[i]-2);
	}
	x += abs(a[n-1]-(ll)(n/2));
	y += abs(a[n-1]);
	z += abs(a[n-1]-2);

	ll ans = y;
	if (m % 2 == 0) ans = min(ans, x);
	if (m == 2) ans = min(ans, z);
	if (m == 1) ans = min(ans, abs(a[0]-a[1]));

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