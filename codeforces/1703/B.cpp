#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int c[26];
	for (int i = 0; i < 26; ++i) c[i] = 0;
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; ++i) {
		c[s[i]-'A']++;
	}
	int ans = n;
	for (int i = 0; i < 26; ++i) {
		if (c[i]) ++ans;
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
