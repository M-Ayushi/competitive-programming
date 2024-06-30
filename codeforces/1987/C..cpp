#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll ans = a[n-1], l = a[n-1];
	for (int i = n-2; i >= 0; --i) {
		if (a[i] > a[i+1]) {
			l = max(l+1, a[i]);
			// if ((a[i] - a[i+1]) < l) {
			// 	++l;
			// }
			// else {
			// 	l = a[i];
			// }
		}
		else {
			++l;
		}
		ans = max(ans, l);
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
