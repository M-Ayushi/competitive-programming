#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, h, m;
	cin >> n >> h >> m;
	m += (h*60);
	int x, y, z, ans = 1e9;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		y += (x*60);
		if (y >= m) z = y-m;
		else z = (1440-m)+y;
		// max(m-y, y-m)
		ans = min(ans, z);
	}
	cout << (ans/60) << " " << (ans%60) << "\n";
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
