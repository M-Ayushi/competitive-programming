#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c = 0, p = 0;
	for (int i = 0; i < n/2; ++i) {
		if (s[i] == s[n-1-i]) c = 0;
		else {
			if (c == 0) ++p;
			//++o;
			++c;
		}
	}
	//cout << p << "\n";
	if (p > 1) cout << "No\n";
	else cout << "Yes\n";
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