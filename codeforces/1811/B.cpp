#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, a, b, x, y;
	cin >> n >> a >> b >> x >> y;
	int s = min(min(a, n-a+1), min(b, n-b+1)); 
	int e = min(min(x, n-x+1), min(y, n-y+1));
	// cout << s << " " << e << "\n";
	int ans = abs(e-s);
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