#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, p = 0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '+') ++p;
		else --p;
	}
	int ans = abs(p);
	cout << ans << "\n";
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
