#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a, b;
	ll m = (ll)0, l = (ll)0;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (a > b) {
			m = max(m, a);
			l += b;	
		}
		else  {
			m = max(m, b);
			l += a;
		}
	}
	ll ans = (l+m)*2;
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