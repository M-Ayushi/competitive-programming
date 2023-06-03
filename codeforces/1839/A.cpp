#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int ans = (n/k);
	if (n % k) ++ans;
	// int ans = ((n-2)/k) + 2;
	// cout << ans << " ";
	
	if ((n % k) != 1) ++ans;
	// cout << (n-k) << " " << k << " " << ((n-k) % k) << "\n";
	// if ((n-k) > 0 && (n-k) % k != 1) ++ans;
	ans = min(ans, n);
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