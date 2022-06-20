#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n], b[n];
		b[0] = 0;
		// ++k;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i < n-1; ++i) {
			b[i+1] = b[i];
			if (a[i] < (2*a[i+1])) ++b[i+1];
		}

		int ans = 0;
		// cout << b[n-1] << " " << b[n-2] << "\n";
		for (int i = k; i < n; ++i) {
			// cout << b[i-k] << " " << b[i] << "\n";
			if (b[i]-b[i-k] == k) ++ans;
		}

		cout << ans << "\n";
	}
	
    return 0;
}
