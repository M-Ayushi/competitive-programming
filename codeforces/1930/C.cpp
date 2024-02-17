#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		a[i] += i+1;
	}
	sort(a, a+n);
	for (int i = n-2; i >= 0; --i) {
		if (a[i] >= a[i+1]) a[i] = a[i+1]-1;
	}
	for (int i = n-1; i >= 0; --i) cout << a[i] << " ";
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
