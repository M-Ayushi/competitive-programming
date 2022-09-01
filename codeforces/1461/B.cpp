#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, m, ans = 0;
	cin >> n >> m;
	string g[n];
	for (int i = 0; i < n; ++i) {
		cin >> g[i];
	}
	int h[n+1][m];
	for (int i = 0; i < m; ++i) h[n][i] = 0;
	for (int i = n-1; i >= 0; --i) {
		for (int j = 0; j < m; ++j) {
			if (g[i][j] == '*') {
				//cout << " " << i << " " << j << "\n";
				if (j > 0 && j < m-1) {
					//cout << i << " " << j << "\n";
					h[i][j] = min(h[i+1][j-1], min(h[i+1][j],h[i+1][j+1])) +1;
				}
				else h[i][j] = 1;
			}
			else h[i][j] = 0;
			ans += h[i][j];
		} 
	}

	// for (int i = 0; i < n; ++i) {
	// 	for (int j = 0; j < m; ++j) {
	// 		cout << h[i][j] << " ";
	// 	}
	// 	cout << "\n";
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