#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, ans = 0;
	cin >> n;
	string s;
	cin >> s;
	vector<bool> b(26, 0);
	for (ll i = 0; i < n; ++i) {
		if (b[(char)(s[i]-'a')] == 0) {
			b[(char)(s[i]-'a')] = 1;
			ans += (n-i);
		}
	}
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
