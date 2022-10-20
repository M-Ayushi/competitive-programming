#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a, ans = 0, m = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		ans += a;
	}
	for (int i = 0; i < n; ++i) {
		cin >> a;
		m = max(m, a);
		ans += a;
	}
	ans -= m;
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