#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	string g, ans = "B\n";
	int x;
	for (int i = 0; i < 8; ++i) {
		cin >> g;
		x = 0;
		for (int j = 0; j < 8; ++j) {
			if (g[j] == 'R') ++x;
		}
		if (x == 8) ans = "R\n";
	}
	cout << ans;
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