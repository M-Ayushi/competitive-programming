#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, m, x, y;
	cin >> n >> m;
	string ans = "YES\n";
	if (m == n) ans = "NO\n";
	for (int i = 0; i < m; ++i) {
		cin >> x >> y;
	}
	cout << ans;
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