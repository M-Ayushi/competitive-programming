#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, s = 0, c = 9, ans = 0, m = 1;
	cin >> n;

	while (s < n) {
		if (n-s < c) c = n-s;
		ans += c*m;
		s += c;
		--c;
		m *= 10;
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
