#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, d;
	cin >> n >> d;
	string s;
	cin >> s;
	bool u = 0;
	for (int i = 0; i < n; ++i) {
		if (u == 0 && s[i]-'0' < d) {
			cout << d;
			u = 1;
		}
		cout << s[i];
	}
	if (u == 0) cout << d;
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