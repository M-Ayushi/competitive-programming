#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n;
	ll x = 0, y = 0, ans;
	cin >> n;
	int a[n];
	// map<int, int> map;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i = 0; i < n; ++i) {
		if (a[i] == a[0]) ++x;
		else break;
	}
	for (int i = n-1; i >= 0; --i) {
		if (a[i] == a[n-1]) ++y;
		else break;
	}
	if (a[0] == a[n-1]) {
		ans = (n*(n-1));
	}
	else ans = (x*y)*2;
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