#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	ll c = 1, ans = 0, l = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] >= c) {
			++l;
			++c;
		}
		else {
			//cout << l << " ";
			//cout << a[i] << " ";
			//cout << ((l*(l-1))/2) << " ";
			//ans += (l*(l+1))/2;
			l = a[i];
			c = a[i]+1;
		}
		ans += l;
		//cout << l << " ";
	}
	//cout << l << " ";
	//cout << ((l*(l-1))/2) << " ";
	//ans += (l*(l+1))/2;
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