#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m;
	ll h, rs = -1, rp, s, p, t, ans = 1;
	cin >> n >> m >> h;
	ll a[m];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[j];
		}
		sort(a, a+m);
		s = 0, p = 0, t = 0;
		for (int j = 0; j < m; ++j) {
			t += a[j];
			if (t <= h) {
				++s;
				p += t;
			}
			else break;
		} 
		if (rs == -1) {
			rs = s, rp = p;
		}
		if (s > rs) ++ans;
		if (s == rs && p < rp) ++ans;
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