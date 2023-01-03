#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s; 
	cin >> s;
	int l = -1, r = -1;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'L') l = i+1;
		else if (r == -1) r = i+1;
	}
	if (l == -1 || r == -1) cout << "-1\n";
	else {
		if (r < l) cout << "0\n";
		else if (r == l+1) cout << l << "\n";
		else cout << "-1\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();
	
	return 0;
}