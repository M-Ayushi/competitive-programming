#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const ll MOD = 1e9 + 7;

void solve() {
	ll n;
	cin >> n;
	ll s = (4*n*n + 3*n - 1) % MOD;
	s = (s*n) % MOD;
	s = (s * 337) % MOD;
	// int a[n];
	// for (ll i = 2; i <= n; ++i) {
	// 	s += i * ((i*2)-1);
	// 	s %= MOD;
	// }
	// s = (s * 2022) % MOD;
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