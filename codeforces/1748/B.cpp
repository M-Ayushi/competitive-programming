#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c[n+1][10];
	for (int i = 0; i <= 9; ++i) c[0][i] = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 10; ++j) {
			c[i+1][j] = c[i][j];
		}
		c[i+1][s[i]-'0']++;
	}

	int m, d, ans = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = i+1; j <= n; ++j) {
			m = 0;
			d = 0;
			for (int k = 0; k < 10; ++k) {
				if (c[j][k]-c[i][k] > 0) {
					++d;
					m = max(m, c[j][k]-c[i][k]);
				}
			}
			if (m > 10) break;
			if (m <= d) ++ans;
			// cout << i << " " << j << "\n"; 
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