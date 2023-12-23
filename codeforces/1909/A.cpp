#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, x, y;
	cin >> n;
	bool r = 0, d = 0, l = 0, u = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		if (x > 0) u = 1;
		if (x < 0) d = 1;
		if (y > 0) r = 1;
		if (y < 0) l = 1;
	}
	if (r && d && l && u) cout << "NO\n";
	else cout << "YES\n";
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
