#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a, b[2][n+1];
	b[0][0] = 0, b[1][0] = 0;
	for (int j = 0; j < 2; ++j) {
		for (int i = 0; i < n; ++i) {
			cin >> a;
			b[j][i+1] = b[j][i]+a;
		}
	}

	int ans = b[1][n-1], x, y;
	for (int i = 1; i <= n; ++i) {
		x = b[0][n] - b[0][i];
		y = b[1][i-1];
		ans = min(ans, max(x, y));
	}
	cout << ans << "\n";

	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	
    return 0;
}
