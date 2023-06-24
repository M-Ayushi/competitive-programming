#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;
 
void solve() {
	ll n, m, a, s1 = 0, s2 = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		s1 += a;
	}
	for (int i = 0; i < m; ++i) {
		cin >> a;
		s2 += a;
	}
 
	if (s1 == s2) cout << "Draw\n";
	else if (s1 > s2) cout << "Tsondu\n";
	else cout << "Tenzing\n";
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