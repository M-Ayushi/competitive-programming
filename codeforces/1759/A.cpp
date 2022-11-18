#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	string s;
	cin >> s;
	string ans = "YES\n";
	string m = "Yes";
	int d = -1, n = sz(s);
	if (s[0] == 'Y') {
		d = 0;
	}
	else if (s[0] == 'e') {
		d = 1;
	}
	else if (s[0] == 's') {
		d = 2;
	}
	else {
		ans = "NO\n";
	}
	for (int i = 0; i < n && d != -1; ++i) {
		if (s[i] != m[(i+d)%3]) {
			ans = "NO\n";
			d = -1;
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
	while (t--) solve();
	
    return 0;
}