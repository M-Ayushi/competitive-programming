#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, ans = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i = 0; i < n; ++i) {
		if (a[i] <= i)  {
			if (i < n-1) {
				if (a[i+1] > i+1) ++ans;
			}
			else ++ans;
		}
	} 
	if (a[0] > 0) ++ans;
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