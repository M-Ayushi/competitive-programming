#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll cs = 0, ts = 0;
	for (int i = n-1; i >= 0; --i) {
		if (cs > 0) {
			ts += cs;
		}
		cs += a[i];
		ts += a[i];
	}
	cout << ts << "\n";
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
