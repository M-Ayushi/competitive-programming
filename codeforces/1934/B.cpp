#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m = 30;
	cin >> n;

	int a[m];
	vector<int> v = {1, 3, 6, 10, 15};
	a[0] = 0;
	for (int i = 1; i < m; ++i) {
		a[i] = i;
		for (int j : v) {
			if (i >= j) a[i] = min(a[i], a[i-j]+1);
		}
		// cout << i << " : " << a[i] << "\n";
	}

	int ans = (n/15) + a[n%15];
	if (n > 15) ans = min(ans, (n/15)-1 + a[15 + (n%15)]);
	cout << ans << "\n";

	// int a[n];
	// a[0] = 0;
	// for (int i = 1; i < n; ++i) {
	// 	a[i] = i;
	// 	if (i >= 1) a[i] = min(a[i], a[i-1]+1);
	// 	if (i >= 3) a[i] = min(a[i], a[i-3]+1);
	// 	if (i >= 6) a[i] = min(a[i], a[i-6]+1);
	// 	if (i >= 10) a[i] = min(a[i], a[i-10]+1);
	// 	if (i >= 15) a[i] = min(a[i], a[i-15]+1);
	// 	// cout << i << " : " << a[i] << "\n";
	// }

	// for (int i = 1; i < 16; ++i) {
	// 	cout << i << " : " << a[i] << "\n";
	// 	cout << (i+15) << " : " << a[i+15] << "\n";
	// 	cout << (i+30) << " : " << a[i+30] << "\n";
	// 	cout << (i+45) << " : " << a[i+45] << "\n\n";
	// } 

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
