#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m, c = 1;
	cin >> n >> m;
	int a[n][m];
	if (n == 4) {
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				a[j][i] = c;
				++c;
			}
		} 
	}
	else {
		for (int i = 0; i < n; i += 2) {
			for (int j = 0; j < m; ++j) {
				a[i][j] = c;
				++c;
			}
		}
		for (int i = 1; i < n; i += 2) {
			for (int j = 0; j < m; ++j) {
				a[i][j] = c;
				++c;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	// cout << "\n";
	
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