#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll l = b * d;
	a = a*d;
	c = c*b;
	b = l;
	d = l;

	if (a == c) cout << "0\n";
	else if (a == 0 || c == 0 ||
		a % c == 0 || c % a == 0) cout << "1\n";
	else cout << "2\n";
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
