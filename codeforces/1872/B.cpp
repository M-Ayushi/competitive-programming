#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, d, s;
	cin >> n;
	int ans = 500;
	for (int i = 0; i < n; ++i) {
		cin >> d >> s;
		ans = min(ans, (d + (s-1)/2));
		// cout << d << " " << s << " " << (d + (s-1)/2) << "\n";
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
