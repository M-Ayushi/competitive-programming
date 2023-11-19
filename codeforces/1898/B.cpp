#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	ll r = a[n-1], ans = 0;
	for (int i = n-2; i >= 0; --i) {
		if (a[i] > r) {
			ans += a[i] /r;
			if (a[i] % r) {
				// cout << a[i] << " " << r << " " << (a[i] / ((a[i]+r-1)/r)) << "\n";
				r = max(a[i] % r, (a[i] / ((a[i]+r-1)/r)));
			}
			else {
				--ans;
			}
		}
		else r = a[i];
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
