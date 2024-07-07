#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	string s;
	int a[n][m], b[n][m];
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < m; ++j) a[i][j] = (s[j] - '0');
	}
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < m; ++j) b[i][j] = (s[j] - '0');
	}
	for (int i = 0; i < n-1; ++i) {
		for (int j = 0; j < m-1; ++j) {
			while (a[i][j] != b[i][j]) {
				a[i][j] = (a[i][j] + 1) % 3;
				a[i+1][j] = (a[i+1][j] + 2) % 3;
				a[i][j+1] = (a[i][j+1] + 2) % 3;
				a[i+1][j+1] = (a[i+1][j+1] + 1) % 3;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)	{
			if (a[i][j] != b[i][j]) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
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
