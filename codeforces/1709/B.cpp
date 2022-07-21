#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, q, x, y;
	ll ans, z = (ll)0;
	cin >> n >> q;
	ll a[n], b[n], c[n];
	b[0] = z, c[0] = z;
	cin >> a[0];
	for (int i = 1; i < n; ++i) {
		cin >> a[i];
		b[i] = b[i-1] + max(z, a[i-1]-a[i]);
		c[i] = c[i-1] + max(z, a[i]-a[i-1]);
		// cout << b[i] << " " << c[i] << "\n";
	}

	while (q--) {
		cin >> x >> y;

		if (x < y) ans = b[y-1]-b[x-1];
		else ans = c[x-1]-c[y-1];

		cout << ans << "\n";
	}

	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}
