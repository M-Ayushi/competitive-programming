#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	int a[3][n];
	for (int j = 0; j < 3; ++j) {
		for (int i = 0; i < n; ++i) {
			cin >> a[j][i];
		}
	}

	int c = 0;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < n; ++j) {
			if ((a[i][j] | x) == x) {
				c = c | a[i][j];
			}
			else break;
		}
	}
	if (c == x) cout << "YES\n";
	else cout << "NO\n";
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