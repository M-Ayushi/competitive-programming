#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int m = (s[0]-'a'), l = 0, c;
	int b = 1;
	while (s[b] == s[0]) ++b;
	for (int i = b; i < n; ++i) {
		c = s[i]-'a';
		if (c <= m) {
			m = c;
			l = i;
		} 
	}
	// cout << l << " ";
	cout << s[l];
	for (int i = 0; i < n; ++i) {
		if (i != l) cout << s[i];
	}
	cout << "\n";
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