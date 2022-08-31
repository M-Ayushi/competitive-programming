#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

/*
int bs(int l, int r, int x) {
	int m = (l+r)/2;
}
*/

void solve() {
	ll n, a, b, c, t;
	cin >> n >> a >> b >> c >> t;
	ll m, x = a*n, y = 0, l;
	for (ll i = 0; i < n; ++i) {
		cin >> m;
		l = t-m;
		y += (c*l)+(a-(b*l));
	}
	cout << max(x, y) << "\n";
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}