#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	map<int, vector<int> > dom;

	int n, x, y, c, cur, p;
	cin >> n;
	bool check[n+1];
	string ans = "YES\n";
	for (int i = 1; i <= n; ++i) {
		cin >> x >> y;
		if (x == y) ans = "NO\n";
		dom[x].push_back(y);
		dom[y].push_back(x);
		check[i] = 1;
	}

	for (int i = 1; i <= n && ans == "YES\n"; ++i) {
		// cout << i << " : ";
		// for (auto x : dom[i]) cout << x << " ";
		// cout << "\n";
		// if (sz(dom[i]) != 2) ans = "NO\n";
		if (check[i]) {
			// cout << i << " ";
			c = 0, cur = i, p = -1;
			do {	
				// cout << cur << " ";
				if (sz(dom[cur]) != 2) {
					ans = "NO\n";
					break;
				}
				check[cur] = 0;
				if (dom[cur][0] == p) {
					p = cur;
					cur = dom[cur][1];
				}
				else {
					p = cur;
					cur = dom[cur][0];
				}
				++c;
			} while (cur != i);
			// } while (c < 5);
			// cout << c << "\n";
			if (c % 2) ans = "NO\n";
			// cout << "\n";
		}
	}

	cout << ans;

	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	
    return 0;
}
