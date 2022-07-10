#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	string s; 
	cin >> s;
	int n = sz(s);
	int x = 0, ans = 0, i;
	char a, b, c;
	while (x < n) {
		a = 'A', b = 'A', c = 'A';
		for (i = x; i < n; ++i) {
			if (s[i] != a && s[i] != b && s[i] != c) {
				if (a == 'A') a = s[i];
				else if (b == 'A') b = s[i];
				else if (c == 'A') c = s[i];
				else break;
			}
		}
		x = i;
		++ans;
	}
	// if (a != 'A') ++ans;
	cout << ans << "\n";
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
