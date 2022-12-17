#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m, k, z = 0;
	cin >> n >> m >> k;
	int a;
	string ans = "YES\n";
	for (int i = 0; i < m; ++i) {
		cin >> a;
		if (a == (n/k)+1) ++z;
		else if (a > n/k) ans = "NO\n";
	}
	if (z > n%k) ans = "NO\n";
	cout << ans;
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