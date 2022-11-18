#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, b;
	cin >> n >> b;
	int a[n];
	int p = 0;
	map<int, bool> d;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		d[a[i]] = 1;
		if (i < n-1 && a[i] < b-1) {
			p = a[i];
		}
	}

	// cout << p << " ";

	int ans = 0;
	// cout << ans <<
	for (int i = a[n-1]; i >= 0; --i) {
		if (d[i] == 0) {
			// cout << i << " ";
			if (i == p+1 || (i == 0 && n > 1 && a[n-2] != p)) {
				ans = b-a[n-1];
				// cout << ans << " ";
			}
			else {
				ans = (b-a[n-1])+i;
				break;
			}
		}
	}
	if (ans == 0) {
		for (int i = b-1; i >= a[n-1]; --i) {
			if (d[i] == 0) {
				// cout << i << " ";
				ans = i-a[n-1];
				break;
			}
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