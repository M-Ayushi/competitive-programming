#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int l, r, x, a, b;
	cin >> l >> r >> x >> a >> b;
	bool la = abs(l-a) >= x, lb = abs(l-b) >= x,
	ra = abs(r-a) >= x, rb = abs(r-b) >= x; 

	if (a == b) cout << "0\n";
	else if (abs(a-b) >= x) cout << "1\n";
	else if ((la && lb) || (ra && rb)) cout << "2\n";
	else if ((la||ra) && (lb||rb)) cout << "3\n";
	else cout << "-1\n";

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