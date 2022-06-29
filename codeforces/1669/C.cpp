#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	cin >> a[0] >> a[1];
	int x = a[0] % 2, y = a[1] % 2;

	bool ans = 1;
	for (int i = 2; i < n; ++i) {
		cin >> a[i];

		if (i % 2) {
			if (a[i] % 2 != y) ans = 0;
		}
		else {
			if (a[i] % 2 != x) ans = 0;
		}
	}

	if (ans) cout << "YES\n";
	else cout << "NO\n";

	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	
    return 0;
}
