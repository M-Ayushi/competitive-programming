#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int x = d-b, ans = 0;
	// cout << x << " ";
	if (x < 0) {
		cout << "-1\n";
		return;
	}
	ans += x;
	b += x;
	a += x;
	x = a-c;
	if (x < 0) {
		cout << "-1\n";
		return;
	}
	ans += x;
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