#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	ll x, y;
	cin >> n >> k;
	vector<ll> f(n+1, 0);
	// for (int i = 0; i <= n; ++i) {
	// 	f[i] = i;
	// }
	for (int i = 0; i < k; ++i) {
		cin >> x >> y;
		f[max(x, y)] = max(f[max(x, y)], min(x, y));
		// f[max(x, y)] = min(f[max(x, y)], abs(x-y));
	}
	// for (auto z : f) cout << z << " ";
	// cout << "\n";
	ll l = 0, ans = 0;
	for (int i = 1; i <= n; ++i) {
		l = max(l, f[i]);
		// cout << l << " ";
		ans += i-l;
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