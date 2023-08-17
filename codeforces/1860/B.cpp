#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll m, k, a, b, ans = 0;
	cin >> m >> k >> a >> b;
	a -= m % k;
	if (a < 0) {
		ans -= a;
		a = 0;
	}
	b += a/k;
	ans += max((m/k) - b, (ll)0);
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
