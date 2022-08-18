#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, m, o = 0;
	cin >> n >> m;
	string a[n];
	// int c[n+1][m+1];
	// for (int i = 0; i < n; ++i) {
	// 	c[i][0] = 0;
	// }
	// for (int j = 0; j < m; ++j) {
	// 	c[0][j] = 0;
	// }
	int mx = 0, c;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		for (int j = 0; j < m; ++j) {
			//c[i][j] = c[i-1][j] + c[i][j-1];
			if (a[i][j] == '1') {
				++o;
				//++c[i][j];
			}
			if (i && j) {
				c = (a[i][j] == '0') + (a[i-1][j] == '0') + (a[i][j-1] == '0') + (a[i-1][j-1] == '0');
				//cout << c << " ";
				mx = max(mx, min(c, 3));
			}
		}
		//cout << "\n";
	}

	//cout << o << " " << mx << "\n";
	int ans = o;
	if (mx == 0) {
		ans -= 2;
	}
	else if (mx == 1) {
		ans -= 1;
	}
	// else if (mx == 2) {
	// 	ans -= 2;
	// }
	// else {

	// }
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
