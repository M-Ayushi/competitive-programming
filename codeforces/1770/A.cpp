#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	ll a, s = 0;
	priority_queue<ll, vector<ll>, greater<ll> > pq;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		pq.push(a);
		s += a;
		// cout << pq.top() << " ";
	}
	// ll ans = s;
	for (int i = 0; i < m; ++i) {
		cin >> a;
		s -= pq.top();
		pq.pop();
		s += a;
		pq.push(a);
		// cout << s << " ";
		// ans = max(s, ans);
	}
	cout << s << "\n";
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