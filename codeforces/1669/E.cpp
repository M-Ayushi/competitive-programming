#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	ll s[11][11], e[11][11];
	ll sn[11], en[11];
	for (int i = 0; i < 11; ++i) {
		for (int j = 0; j < 11; ++j) {
			s[i][j] = 0, e[i][j] = 0;
		}
		sn[i] = 0, en[i] = 0;
	}
	int n;
	cin >> n;
	string a;
	ll ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		s[a[0]-'a'][a[1]-'a']++;
		e[a[1]-'a'][a[0]-'a']++;
		sn[a[0]-'a']++;
		en[a[1]-'a']++;
		// for (int j = 0; j < i; ++j) {
		// 	if ((s[i][0] == s[j][0] && s[i][1] != s[j][1])
		// 		|| (s[i][1] == s[j][1] && s[i][0] != s[j][0])) {
		// 		++ans;
		// 	}
		// }
	}

	for (int i = 0; i < 11; ++i) {
		for (int j = 0; j < 11; ++j) {
			ans += (sn[i]-s[i][j])*s[i][j];
			ans += (en[i]-e[i][j])*e[i][j];
		}
	}
	ans = ans >> 1;
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
