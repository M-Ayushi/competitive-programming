#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
#define ai2 array<ll, 2>
using namespace std;

void solve() {
	int n;
	ll p, ans = 0, c, av;
	cin >> n >> p;
	ll a[n], b;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	vector<ai2> v;
	priority_queue<ai2, vector<ai2>, greater<ai2> > pq;
	pq.push({p, n});
	for (int i = 0; i < n; ++i) {
		cin >> b;
		v.push_back({b, a[i]});
	}
	// 
	sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i) {
		c = pq.top()[0], av = pq.top()[1];
		pq.pop();
		ans += c;
		--av;
		if (av > 0) pq.push({c, av});

		pq.push({v[i][0], v[i][1]});
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
