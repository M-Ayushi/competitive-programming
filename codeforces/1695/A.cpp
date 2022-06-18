#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m, g = -1e9-1, a;
		ll x, y;
		cin >> n >> m;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> a;
				if (a > g) {
					g = a, x = i, y = j;
				}
			}
		}

		// cout << x << " " << y << "\n";

		ll N = (ll)(n-1), M = (ll)m-1;
		ll b = (N-x), c = (M-y);
		// cout << b << " " << c << "\n";

		ll ans = (max(x, b)+1) * (max(y, c)+1);
		cout << ans << "\n";
		//int ans = max(max(i+j, n-i+m-j-2), max());
	}
	
    return 0;
}
