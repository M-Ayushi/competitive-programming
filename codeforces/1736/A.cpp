#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], b[n];
	int x = 0, y = 0, z = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		x += a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		y += b[i];
		if (a[i] == b[i]) ++z;
	}

	int ans = n-z;
	ans = min(ans, abs(x-y)+1);
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