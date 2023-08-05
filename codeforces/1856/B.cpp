#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a[n], s = 0, o = 0, g = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == 1) ++o;
		else ++g;

		s += a[i];
	}
	ll r = (2 * o) + g;
	if (r > s || n == 1) cout << "NO\n";
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
