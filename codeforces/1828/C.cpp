#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const ll MOD = 1e9 + 7;

void solve() {
	int n, p = 0;
	cin >> n;
	ll a[n], b[n], c[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	sort(a, a+n);
	sort(b, b+n);

	for (int i = 0; i < n && p < n; ++i) {
		if (a[p] > b[i]) c[i] = (n-p);
		else {
			++p;
			--i;
		}
	}

	if (p == n) {
		cout << "0\n";
		return;
	}

	ll ans = 1, x;
	for (int i = n-1; i >= 0; --i) {
		x = (c[i]-(n-(i+1)));
		if (x <= 0) {
			ans = 0;
			break;
		}
		ans *= x;
		ans %= MOD;
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