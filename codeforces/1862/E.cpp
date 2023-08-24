#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	int n, m;
	ll d, ans = 0, c = 0, a;
	cin >> n >> m >> d;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		c -= d;
		if (a > 0) {
			pq.push(a);
			c += a;
			if (sz(pq) > m) {
				c -= pq.top();
				pq.pop();
			}
		}
		ans = max(ans, c);
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
