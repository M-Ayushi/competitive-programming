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
		int n, s;
		cin >> n >> s;
		int a[n]; //, b[n+1];
		// b[0] = 0;
		vector<int> v;
		// v.push_back(0);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i]) v.push_back(i+1);
			// b[i+1] = a[i]+b[i];
		}
		// v.push_back(n+1);

		int ans = -1;
		if (sz(v) == s) ans = 0;
		else if (sz(v) > s) {
			int x = 0; //, y, z;
			// , l = 0, r;
			// for (int i = 1; i <= n; ++i) {
			// 	if (b[i] == s) {
			// 		r = i-1;
			// 		break;
			// 	}
			// }
			// cout << (0) << " " << v[s]-1 << "\n";
			x = max(x, v[s]-1);
			// cout << (v[sz(v)-s-1]) << " " << (n+1) << "\n";
			x = max(x, (n)-(v[sz(v)-s-1]));

			for (int i = s+1; i < sz(v); ++i) {
				// if (v[i])
				// cout << (v[i-(s+1)]+1) << " " << (v[i]-1) << "\n";
				x = max(x, (v[i])-(v[i-(s+1)]+1));
			}
			ans = n-x;
		}
		// cout << "\n";
		cout << ans << "\n";
	}
	
    return 0;
}
