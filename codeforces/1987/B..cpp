#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, ans = 0, m = 0, c;
	cin >> n;
	ll a[n+1];
	a[0] = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] < a[i-1]) {
			c = a[i-1]-a[i];
			m = max(m, c);
			ans += c;
			a[i] = a[i-1];
		}
	}
	ans += m;
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
