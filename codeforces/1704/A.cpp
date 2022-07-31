#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	string a, b;
	cin >> a >> b;
	int x = n-m+1;
	// cout << b.substr(1, m-1) << "\n";
	// cout << a.substr(x, m-1) << "\n\n";
	bool ans = (a.substr(x, m-1) == b.substr(1, m-1));
	bool c = 0;
	for (int i = 0; i < x; ++i) {
		if (a[i] == b[0]) c = 1;
	}

	if (ans && c) cout << "YES\n";
	else cout << "NO\n";
	// if (a.substr(n-m-1, m))
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
