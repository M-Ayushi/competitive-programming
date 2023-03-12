#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	int x = abs(a);
	int y = abs(b);
	int ans = x+y;
	ans += max(0, abs(x-y)-1);
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