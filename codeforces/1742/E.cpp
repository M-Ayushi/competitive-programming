#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, q, l, r, c;
	cin >> n >> q;
	ll a, m[n+1], s[n+1], h;
	m[0] = 0, s[0] = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a;
		m[i] = max(m[i-1], a);
		s[i] = s[i-1]+a;
	}

	while (q--) {
		cin >> h;
		l = 0, r = n;
		while (r > l) {
			if (l == r-1) {
				if (h >= m[r]) l = r;
				else r = l;
			}
			c = (r+l)/2;
			if (m[c] > h) {
				// l = c;
				// r = c;
				// break;
				r = c-1;
			}
			else {
				l = c;
			}
		}
		//<< z << " " 
		//cout << l << " " << r << " ";
		cout << s[r] << " ";
	}
	cout << "\n";
	
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