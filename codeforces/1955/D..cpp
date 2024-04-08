#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 1e6+1;

void solve() {
	int n, m, k, ans = 0, cur = 0;
	cin >> n >> m >> k;
	int a[n], b[n];
	// vector<int> c(N, 0);
	// vector<int> d(N, 0);
	map<int, int> c, d;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
		d[b[i]]++;
	}

	for (int i = 0; i < m; ++i) {
		cur -= min(c[a[i]], d[a[i]]);
		c[a[i]]++;
		cur += min(c[a[i]], d[a[i]]);
	}
	if (cur >= k) ++ans;
	// cout << "cur = " << cur << "\n";
	for (int i = m; i < n; ++i) {
		cur -= min(c[a[i-m]], d[a[i-m]]);
		c[a[i-m]]--;
		cur += min(c[a[i-m]], d[a[i-m]]);
		cur -= min(c[a[i]], d[a[i]]);
		c[a[i]]++;
		cur += min(c[a[i]], d[a[i]]);
		if (cur >= k) ++ans;
		// cout << "cur = " << cur << "\n";
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
