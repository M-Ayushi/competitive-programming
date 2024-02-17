#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int m;
	cin >> m;
	int n = m*2;
	ll a[n], ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i = 0; i < n; i+=2) {
		ans += a[i];
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
