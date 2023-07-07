#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, a, b, ans = 0;;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (a > b) ++ans;
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