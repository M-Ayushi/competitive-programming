#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	if (k > 3) cout << "0\n";
	else if (k == 1) cout << "1\n";
	else if (k == 2) cout << (min(n-1, m) + (m/n)) << "\n";
	else {
		int ans = m - (m/n) - (n-1);
		cout << max(ans, 0) << "\n";
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
