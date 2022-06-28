#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int ans = 0;
	if (k == 1) {
		ans = (n-1)/2;
	}
	else {
		for (int i = 1; i < n-1; ++i) {
			if (a[i] > (a[i-1]+a[i+1])) ++ans;
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
	while (t--) {
		solve();
	}
	
    return 0;
}
