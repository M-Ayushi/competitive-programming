#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	string ans = "NO\n";
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == 1) ans = "YES\n";
	}
	cout << ans;
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