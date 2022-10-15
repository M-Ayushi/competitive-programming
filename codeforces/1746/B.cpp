#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
 	}
 	int x = 0, y = n-1, ans = 0;
 	while (y > x) {
 		if (a[y]) --y;
 		if (a[x] == 0) ++x;

 		if (y > x && a[y] == 0 && a[x]) {
 			++ans;
 			--y;
 			++x;
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