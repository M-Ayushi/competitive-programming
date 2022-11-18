#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, s;
	cin >> n >> s;
	int a, m = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		s += a;
		m = max(m, a);
	}
	s = s*2;
	int r = sqrt(s);
	int p = (r * (r+1)) ;
	// cout << p << " " << s << " " << r << " " << m << "\n";
	if (p == s && r >= m) cout << "YES\n";
	else cout << "NO\n";
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