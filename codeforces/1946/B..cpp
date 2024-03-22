#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const ll MOD = 1e9 + 7;

void solve() {
	ll n, k;
	cin >> n >> k;
	ll a[n];
	ll c = 0, m = 0, s = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		c += a[i];
		m = max(m, c);
		c = max(c, (ll)0);
		s += a[i];
	}
	m = m % MOD;
	while (s < 0) s += MOD;
	for (int i = 0; i < k; ++i) {
		s += m;
		m = m << 1;
		m = m % MOD;
		s = s % MOD;
	}
	cout << s << "\n";
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
