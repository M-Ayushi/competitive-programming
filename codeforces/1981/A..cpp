#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll l, r, ans = 0;
	cin >> l >> r;

	for (ll i = 0; i <= 32; ++i) {
		if ((1 << i) > r) {
			ans = i-1;
			break;
		}
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
