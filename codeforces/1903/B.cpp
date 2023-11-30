#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n][n];
	int ans[n];
	for (int i = 0; i < n; ++i) {
		ans[i] = (1 << 30) - 1;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> a[i][j];
			if (i != j) ans[i] = ans[i] & a[i][j];
		}
	}


	bool p = 1;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i != j) {
				if (a[i][j] != (ans[i] | ans[j])) {
					p = 0;
				}
			}
		}
	}

	if (p) {
		cout << "YES\n";
		for (int i = 0; i < n; ++i) {
			cout << ans[i] << " ";
		}
	}
	else cout << "NO";
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
