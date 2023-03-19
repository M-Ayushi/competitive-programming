#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, q, l, r;
	ll k, s, f;
	cin >> n >> q;
	ll a[n], b[n+1];
	b[0] = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i+1] = b[i]+a[i];
	}
	ll p = b[n] - b[0];

	for (int i = 0; i < q; ++i) {
		cin >> l >> r >> k;

		s = (b[r] - b[l-1]) % 2;
		f = (k*(r-l+1))%2;
		// cout << s << "\n";
		if (p % 2) {
			if (s == f) {
				cout << "YES\n";
			}
			else cout << "NO\n";
		}
		else {
			if (s != f) {
				cout << "YES\n";
			}
			else cout << "NO\n";
		}

	}
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