#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m, d, ans = 1, remove = 0;
	cin >> n >> m >> d;
	int b[m], p = 1, pp = 1, x, y;
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
		ans += (b[i]-p) / d;
		if ((b[i]-p) % d) ++ans;
		// cout << (b[i]-p) << "\n";

		if (i > 0) {
			x = (b[i] - pp) / d;
			if (((b[i] - pp) % d)) ++x;
			y = ((p - pp) / d) + ((b[i] - p) / d);
			if (((p - pp) % d)) ++y;
			if (((b[i] - p) % d)) ++y;
			if (x < y) ++remove;

			// cout << x << " " << y << "\n";
		}

		pp = p;
		p = b[i];
	}

	ans += (n-p) / d;
	// cout << (n-p) << "\n";

	x = (n - pp) / d;
	y = ((p - pp) / d) + ((n - p) / d);
	if (((p - pp) % d)) ++y;
	if (x < y) ++remove;

	// x = (n - pp) / d;
	// y = ((p - pp) / d) + ((n - p) / d) + 1;
	// if (x < y) ++remove;


	if (remove) cout << ans-1 << " " << remove << "\n";
	else cout << ans << " " << m << "\n";
	// cout << ans << " " << remove << "\n";
	// cout << "\n";
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
