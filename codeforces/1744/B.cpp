#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, q;
	ll x, y, z, a, e = 0, o = 0, s = 0;
	cin >> n >> q;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		s += a;
		if (a % 2) ++o;
		else ++e;
	}
	while (q--) {
		cin >> x >> y;
		if (x) {
			z = o*y;
			s+=z;
			if (y % 2) {
				e+=o;
				o = 0;
			}
		}
		else {
			z = e*y;
			s += z;
			if (y%2) {
				o += e;
				e = 0;
			}
		}
		cout << s << "\n";
	}
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