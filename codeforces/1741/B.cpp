#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n == 3) cout << "-1\n";
	else if (n % 2) {
		for (int i = (n+1)/2; i <= n; ++i) cout << i << " ";
		for (int i = 1; i <= n/2; ++i) cout << i << " ";
		cout << "\n";
	}
	else {
		for (int i = 1; i <= n; i += 2) {
			cout << i+1 << " " << i << " ";
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