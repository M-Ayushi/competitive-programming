#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a, ans = 0;
	vector<int> l(101, 0);
	for (int i = 0; i < n; ++i) {
		cin >> a;
		l[a]++;
	}
	for (int i = 1; i < 101; ++i) {
		ans += l[i]/3;
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
