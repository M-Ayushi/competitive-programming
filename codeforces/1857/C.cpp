#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int m = (n*(n-1))/2, c = -1;
	// cout << m << "\n";
	int a[m];
	for (int i = 0; i < m; ++i) {
		cin >> a[i];
	}
	sort(a, a+m);
	for (int i = n-1; i >= 0; --i) {
		c += i;
		// cout << c << " ";
		
		cout << a[c] << " ";
	}
	cout << "\n";
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
