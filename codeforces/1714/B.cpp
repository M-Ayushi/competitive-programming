#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	map<int, bool> m;
	int n, ans = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int j = n-1; j >= 0; --j) {
		if (m[a[j]]) {
			ans = j+1;
			break;
		}
		else m[a[j]] = 1;
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
