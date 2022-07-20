#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, z = 0, x;
	cin >> n;
	vector<int> v;
	string ans = "YES\n";
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (x == 0) ++z;
		else v.push_back(x);
	}
	if (sz(v) < 5) {
		if (z > 0) v.push_back(0);
		for (int i = 0; i < sz(v) && ans == "YES\n"; ++i) {
			for (int j = i+1; j < sz(v) && ans == "YES\n"; ++j) {
				for (int k = j+1; k < sz(v) && ans == "YES\n"; ++k) {
					if (count(v.begin(), v.end(), (v[i]+v[j]+v[k])) == 0) {
						ans = "NO\n";
					}
				}
			}
		}
	}
	else ans = "NO\n";
	cout << ans;
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
