#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c = 0, f = -1, l = -2;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '1') {
			++c;
			if (f == -1) f = i;
			l = i;
		}
	}
	if (c % 2 || f == l-1) cout << "NO\n";
	else cout << "YES\n";
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
