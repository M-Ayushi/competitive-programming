#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a[n], ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	//ll p = a[n-1], ans = 0;
	for (int i = n-2; i >= 0; --i) {
		//ans += max((ll)0, a[i]-p);
		//p = min(p, a[i]);
		if (a[i] > a[i+1]) ans = max(ans, a[i]);
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
