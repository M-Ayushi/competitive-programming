#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	ll z = (ll)0;
	ll to = z, tz = z, c = z+1, mz = z, mo = z;
	if (s[0] == '0') ++tz;
	else ++to;
	for (int i = 1; i < n; ++i) {
		if (s[i] == '0') {
			++tz;
			if (s[i-1] == '0') ++c;
			else {
				mo = max(mo, c);
				c = z+1;
			}
		}
		else {
			++to;
			if (s[i-1] == '1') ++c;
			else {
				mz = max(mz, c);
				c = z+1;
			}
		}
	}
	if (s[n-1] == '0') {
		mz = max(mz, c);
	}
	else mo = max(mo, c);

	ll ans = max(tz*to, max(mz*mz, mo*mo));
	cout << ans<< "\n";
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