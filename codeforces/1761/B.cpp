#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	map<int, int> d;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		d[a[i]]++;
	}
	int ans = n;
	if (sz(d) == 2) {
		ans = ((n-2)/2)+2;
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