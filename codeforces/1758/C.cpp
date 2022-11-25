#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

vector<int> fact(int n, int k) {
	vector<int> v;
	v.push_back(k);
	n = n/k;

	while (n % 2 == 0) {
		v.push_back(2);
		n = n/2;
	} 
	for (int i = 3; i <= n; i+=2) {
		while (n % i == 0) {
			v.push_back(i);
			n = n/i;
		}
	}
	return v;
}

void solve() {
	int n, k, x = 1, y;
	cin >> n >> k;
	int a[n+1];
	for (int i = 1; i <= n; ++i) {
		a[i] = i;
	}
	swap(a[1], a[n]);
	// if (k < n) swap(a[1], a[k]);
	if (n % k == 0) {
		vector<int> v = fact(n, k);
		// for (auto x : v) cout << x << " ";
		// cout << "\n";
		for (int i = 0; i < sz(v); ++i) {
			y = x*v[i];
			// cout << x << " " << y << "\n";
			if (y < n) swap(a[x], a[y]);
			x = y;
		}
		for (int i = 1; i <= n; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}
	else cout << "-1\n";
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