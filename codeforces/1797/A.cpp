#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

bool corner(int x, int y, int n, int m) {
	if (x == 1 && y == 1) return 1;
	if (x == n && y == 1) return 1;
	if (x == 1 && y == m) return 1;
	if (x == n && y == m) return 1;

	return 0;
}

void solve() {
	int n, m, a, b, x, y;
	cin >> n >> m >> a >> b >> x >> y;
	int ans = min({n, m, 4});

	if (corner(x, y, n, m) || corner(a, b, n, m)) ans = min(ans, 2);
	if (x == 1 || y == 1 || a == 1 || b == 1) ans = min(ans, 3);
	if (x == n || y == m || a == n || b == m) ans = min(ans, 3);

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