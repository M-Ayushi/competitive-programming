#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, x, a, mn = 1e9, mx = 0, ans = 0;
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		mn = min(mn, a), mx = max(mx, a);
		// cout << mn << " " << mx << "\n";
		if ((mx - mn) > (2*x)) {
			// cout << i << " ";
			++ans;
			mn = a, mx = a;
		}
	}
	// cout << "\n";
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
