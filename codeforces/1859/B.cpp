#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	ll ans = 0, mn = 1e9, smn = 1e9;
	cin >> n;
	ll a, x, sm, ss;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		sm = 1e9, ss = 1e9;
		for (int j = 0; j < a; ++j) {
			cin >> x;
			if (x <= sm) {
				ss = sm;
				sm = x;
			}
			else if (x < ss) ss = x;
		}
		mn = min(mn, sm);
		smn = min(smn, ss);

		ans += ss;
	}

	ans -= smn;
	ans += mn;

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
