#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, s = 0;
	cin >> n;
	vector<int> ans;
	for (int i = 2; i <= sqrt(n) && s < 2; ++i) {
		if (n % i == 0) {
			ans.push_back(i);
			++s;
			n = n/i;
		}
	}
	/*if (s == 1) {
		for (int i = ans[0]; i <= sqrt(n) && s < 2; ++i) {
			if (n % i == 0) {
				ans.push_back(i);
				++s;
				n = n/i;
			}
		}
	}*/
	if (s == 2 && n > ans[1]) {
		cout << "YES\n";
		cout << ans[0] << " " << ans[1] << " " << n << "\n";
	}
	else {
		cout << "NO\n";
	}
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