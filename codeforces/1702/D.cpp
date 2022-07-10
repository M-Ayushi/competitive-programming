#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int c[26];
	for (int i = 0; i < 26; ++i) c[i] = 0;

	string s;
	cin >> s;
	int x, z;
	cin >> x;
	
	int n = sz(s);
	int v = n;
	// cout << "x = " << x << "\n";
	// cout << "s = " << s << "\n";
	// cout << "n = " << n << "\n";
	for (int i = 0; i < n; ++i) {
		z = (s[i]-'a');
		c[z]++;
		v += z;
		// cout << "z = " << z << "\n";
	}

	int j = 25, y; // , ans = 0;
	// int r = 25;
	// cout << v << "\n";
	while (v > x) {
		if (c[j]) {
			z = v-x;
			y = z/(j+1);
			if (z % (j+1)) ++y;

			// ans += min(c[j], y);
			v -= (min(c[j], y)*(j+1));
			c[j] -= min(c[j], y);
		}
		--j;
	}
	++j;

	for (int i = 0; i < n; ++i) {
		if ((s[i]-'a') < j) cout << s[i];
		else if ((s[i]-'a') == j && c[j]) {
			cout << s[i];
			c[j]--;
		}
	}
	cout << "\n";
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
