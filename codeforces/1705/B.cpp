#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a, e = 0, d = 0;
	bool f = 0;
	for (int i = 0; i < n-1; ++i) {
		cin >> a;
		if (a == 0) {
			if (f) ++e;
		}
		else {
			f = 1;
			d += a;
		}
	}
	cin >> a;
	ll ans = d + e;
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
