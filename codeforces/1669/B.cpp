#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a+n);

	for (int i = 2; i < n; ++i) {
		if (a[i] == a[i-1] && a[i-1] == a[i-2]) {
			cout << a[i] << "\n";
			return;
		}
	}	
	cout << "-1\n";
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	
    return 0;
}
