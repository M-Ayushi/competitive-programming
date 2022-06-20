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
		int a[4];
		for (int i = 0; i < 4; ++i) cin >> a[i];

		int ans = 0;
		for (int i = 1; i < 4; ++i) {
			if (a[i] > a[0]) ++ans;
		}
		cout << ans << "\n";
	}
	
    return 0;
}
