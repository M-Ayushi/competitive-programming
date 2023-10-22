#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;
	vector<int> v(26, 0);
	for (int i = 0; i < n; ++i) {
		v[s[i]-'a']++;
	}
	int o = 0;
	for (int i = 0; i < 26; ++i) {
		// cout << v[i] << " ";
		if (v[i] % 2) ++o;
	}
	// cout << "\n";
	// int x = min(k, o);
	// k -= x;
	// cout << k << " " << (o-1) << "\n";
	if (k >= (o-1)) cout << "YES\n";
	else cout << "NO\n";
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
