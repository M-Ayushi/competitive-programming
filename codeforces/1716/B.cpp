#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, c;
	cin >> n;
	cout << n << "\n";
	// for (int i = 0; i < n; ++i) a[]
	for (int i = n; i > 0; --i) {
		c = 1;
		for (int j = 1; j < i; ++j) {
			cout << j << " ";
			++c;
		}
		cout << n << " ";
		for (int j = i+1; j <= n; ++j) {
			cout << c << " ";
			++c;
		}
		cout << "\n";
	}
	
	// int a[n];
	// for (int i = 0; i < n; ++i) {
	// 	cin >> a[i];
	// }
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
