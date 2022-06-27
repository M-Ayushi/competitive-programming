#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int m, s, l = 0;
	cin >> m >> s;
	string mn = "-1", mx = "-1", x, y;
	
	if (m == 1 && s == 0) {
		mn = "0", mx = "0";
	}
	else if (s > 0 && s <= m*9) {
		x = "";
		while (s) {
			x.append(to_string(min(s, 9)));
			s -= min(s, 9);
			++l;
		}

		for (int i = l; i < m; ++i) x.append("0");
		y = x;
		if (l < m) {
			y[l-1] = (y[l-1]-1);
			y[m-1] = '1';
		}
		reverse(y.begin(), y.end());
		mn = y, mx = x;
	}

	cout << mn << " " << mx << "\n";
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}
