#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, x;
	cin >> n;
	// int a[n];
	// vector<int> a, b;
	ll c[n+1], ans = 0;
	c[0] = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> x;
		c[i] = c[i-1];
		if (x < i) {
			c[i]++;

			if (x > 0) {
				ans += c[x-1];
			}

			// a.push_back(x);
			// b.push_back(i);
		}
		// cout << c << " ";
	}
	// cout << "\n";

	// int m = sz(a);
	// ll ans = 0;
	// for (int i = 0; i < m; ++i) {
	// 	for (int j = i+1; j < m; ++j) {
	// 		if (b[i] < a[j]) ++ans;
	// 	}
	// }
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
