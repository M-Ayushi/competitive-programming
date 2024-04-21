#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k, a = 1;
	cin >> n >> k;
	if (n == 1) cout << k << "\n";
	else {
		for (int i = 0; i < 31; ++i) {
			if ((1 << i) - 1 <= k && (1 << (i+1)) > k) {
				a = ((1 << i)-1);
				break;
			}
		}
		cout << a << " " << k-a << " ";
		for (int i = 2; i < n; ++i) {
			cout << "0 ";
		}
		cout << "\n";
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
