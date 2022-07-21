#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int x;
	cin >> x;
	int a[4];
	for (int i = 1; i < 4; ++i) {
		cin >> a[i];
	}

	if (a[x] && a[a[x]]) cout << "YES\n";
	else cout << "NO\n";
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
