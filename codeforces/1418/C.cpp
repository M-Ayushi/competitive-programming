#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int dp[n][2];
	dp[0][0] = a[0];
	dp[0][1] = n;
	for (int i = 1; i < n; ++i) {
		if (i > 1) dp[i][0] = dp[i-2][1] + a[i-1];
		else dp[i][0] = a[i-1];
		dp[i][0] = min(dp[i][0], dp[i-1][1]) + a[i];

		if (i > 1) dp[i][1] = min(dp[i-1][0], dp[i-2][0]);
		else dp[i][1] = dp[i-1][0];
	}
	cout << min(dp[n-1][0], dp[n-1][1]) << "\n";

	// for (int i = 0; i < n; ++i) {
	// 	cout << dp[i][0] << " ";
	// }
	// cout << "\n";
	// for (int i = 0; i < n; ++i) {
	// 	cout << dp[i][1] << " ";
	// }
	// cout << "\n\n";

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
