#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int nw = n+1, w = n+1, ans = 0;
	int a;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a < w && a > nw) {
			++ans;
			w = a;
		}
		else if (a < nw) {
			nw = a;
		}
	}
	cout << ans << "\n";
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
