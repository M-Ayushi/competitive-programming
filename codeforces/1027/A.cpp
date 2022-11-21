#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, j, x = 0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n/2; ++i) {
		j = (n-1)-i;
		if (s[i] == s[j] || abs(s[i]-s[j]) == 2) {
			++x;
		}
	}
	if (x == n/2) cout << "YES\n";
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