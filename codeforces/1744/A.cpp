#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, c;
	cin >> n;
	int a[n], k[51];
	for (int i = 0; i < 51; ++i) {
		k[i] = -1;
	}
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	string s, ans = "YES\n";
	cin >> s;
	for (int i = 0; i < n; ++i) {
		c = s[i]-'a';
		if (k[a[i]] == -1) k[a[i]] = c;
		
		if (k[a[i]] != c) {
			//cout << i << " " << k[c] << " ";
			ans = "NO\n";
			break;
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