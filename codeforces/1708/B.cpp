#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> ans;
	string s = "YES\n";
	for (int i = 1; i <= n; ++i) {
		if (r/i > l/i || l % i == 0) {
			ans.push_back(i*(r/i));
		}
		else {
			s = "NO\n";
			break;
		}
	}

	cout << s;
	if (s == "YES\n") {
		for (auto x : ans) cout << x << " ";
		cout << "\n";
	}
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
