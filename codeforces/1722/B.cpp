#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < n; ++i) {
		if ((a[i] == 'R' || b[i] == 'R') && a[i] != b[i]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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