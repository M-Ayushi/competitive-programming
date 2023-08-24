#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const ll u = 145e7;

ll bs(ll l, ll r, ll x) {
	ll m = (l + r) / 2;
	ll c = ((m * (m-1)) / 2);
	ll c2 = ((m * (m+1)) / 2);
	// cout << l << " " << r << " " << m << " " << c << "\n";

	if (l == r) return l;
	if (c2 > x && c <= x) return m;

	if (c > x) return bs(l, m, x);
	else return bs(m+1, r, x);
}

void solve() {
	ll n;
	cin >> n;
	ll m = bs(1, u, n); 
	ll c = ((m * (m-1)) / 2);
	// cout << m << " " << c << "\n";
	ll ans = m + (n-c);
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
