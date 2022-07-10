#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	map<int, int> s;
	map<int, int> e;
	int n, q;
	cin >> n >> q;
	int a;
	for (int i = 1; i <= n; ++i) {
		cin >> a;
		if (s[a] == 0) s[a] = i;
		e[a] = i;
	}

	int x, y;
	for (int i = 0; i < q; ++i) {
		cin >> x >> y;
		if (s[x] && e[y] && s[x] < e[y]) {
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
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
