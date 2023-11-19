#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	if (k < (n+m-2) || (k - (n+m-2)) % 2) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	char a[n][m-1], b[n-1][m];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m-1; ++j) {
			a[i][j] = 'R';
		}
	}
	for (int i = 0; i < n-1; ++i) {
		for (int j = 0; j < m; ++j) {
			b[i][j] = 'R';
		}
	}

	for (int i = 0; i < n-1; ++i) {
		if (i % 2) b[i][0] = 'B';
	}
	for (int i = 0; i < m-1; ++i) {
		if ((i+n-1) % 2) a[n-1][i] = 'B';
	}

	b[0][1] = 'B';
	if (a[n-1][m-2] == 'R')	b[n-2][m-1] = 'B', b[n-2][m-2] = 'B';
	else {
		b[n-2][m-1] = 'R', b[n-2][m-2] = 'R';
		a[n-2][m-2] = 'B';
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m-1; ++j) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < n-1; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << b[i][j] << " ";
		}
		cout << "\n";
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
