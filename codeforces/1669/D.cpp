#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int b = 0, r = 0;
	bool ans = 1;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'B') ++b;
		else if (s[i] == 'R') ++r;
		else {
			if ((b && r == 0) || (r && b == 0)) {
				ans = 0;
				b = 0, r = 0;
				break;
			}
			b = 0, r = 0;
		}
	}
	if ((b && r == 0) || (r && b == 0)) ans = 0;

	if (ans) cout << "YES\n";
	else cout << "NO\n";

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
