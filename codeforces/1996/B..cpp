#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	string a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (i % k == 0) {
			for (int j = 0; j < n; ++j) {
				if (j % k == 0) cout << a[i][j];
 			}
 			cout << "\n";
		}
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
