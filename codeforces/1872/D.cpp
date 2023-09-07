#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, x, y;
	cin >> n >> x >> y;
	ll a = n/x, b = n/y, c = n / (lcm(x, y));
	a -= c, b -= c;
	ll p = ((n * (n+1)) / 2) - (((n-a) * (n-a+1)) / 2);
	ll m = ((b * (b+1)) / 2);
	ll ans = p - m;
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
