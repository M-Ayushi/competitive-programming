#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int b = 0, p = 0;
	// vector<int> ans(n+1, 0);
	for (int i = 0; i < (n/2); ++i) {
		if (s[i] == s[n-i-1]) ++p;
		else ++b;
	}

	if (p*2 == n) {
		for (int i = 1; i <= n+1; ++i) cout << (i%2);
		cout << "\n";
		return;
	}

	for (int i = 0; i < b; ++i) cout << 0;
	for (int i = 0; i <= p*2; i += 2) cout << 1 << (n%2);
	for (int i = b+p*2+1; i < n; ++i) cout << 0;
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
