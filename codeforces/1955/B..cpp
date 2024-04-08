#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, c, d;
	cin >> n >> c >> d;
	ll m = n*n;
	ll a[m];
	for (int i = 0; i < m; ++i) {
		cin >> a[i];
	}
	sort(a, a+m);
	vector<ll> x;
	for (ll i = 0; i < n; ++i) {
		for (ll j = 0; j < n; ++j) {
			x.push_back(a[0] + (i*c) + (j*d));
		}
	}
	sort(x.begin(), x.end());
	for (ll i = 0; i < m; ++i) {
		if (a[i] != x[i]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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
