#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, x, l, ml;
	cin >> n;
	int a[n], b[n+1], ans = n;
	b[0] = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i+1] = b[i]+a[i];
	}
	for (int i = n; i > 0; --i) {
		if (b[n]%i == 0) {
			x = b[n]/i, l = 0, ml = 0;
			//cout << x << " ";
			for (int i = 1; i <= n; ++i) {
				if (b[i]-b[l] == x) {
					ml = max(ml, i-l);
					l = i;
					//++s;
				}
				else if ((b[i]-b[l]) > x) {
					break;
				}
			}
			//cout << s << " ";
			//cout << b[n]-b[l] << " ";
			if (l == n) {
				ans = min(ans, ml);
				//break;
			}
		}
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