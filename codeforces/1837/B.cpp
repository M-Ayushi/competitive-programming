#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c = 1, m = 1;
	for (int i = 1; i < n; ++i) {
		if (s[i] == s[i-1]) ++c;
		else {
			m = max(m, c);
			c = 1;
		}
	}
	m = max(m, c);
	cout << (m+1) << "\n";
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