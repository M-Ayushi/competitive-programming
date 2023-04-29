#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, ans = 0;
	cin >> n >> k;
	string a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == a[0]) ++ans;
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