#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

int pt(int x) {
	int ans = 0;
	while (x % 2 == 0) {
		++ans;
		x = x >> 1;
	}
	return ans;
}

void solve() {
	int n;
	cin >> n;
	//cout << (n >> 1) << "\n";
	int p = 0, c = 0;
	int a[n];
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		p += pt(a[i]);
		v.push_back(pt(i+1));
		c += v[i];
	}
	// for (auto j : v) cout << j << " ";
	if (p+c < n) cout << "-1\n";
	else {
		sort(v.begin(), v.end());
		int ans = 0;
		for (int i = n-1; i >= 0 && p < n; --i) {
			p += v[i];
			++ans;
		}
		cout << ans << "\n";
	} 
	//int x = pt(n);
	// if (p >= n) cout << "0"
	// cout << p << "\n";

	// int y = 1;
	// while (y <= n) {
	// 	y = y << 1;
	// 	//++x;
	// }
	// y = y >> 1;
	// //cout << y << "\n";
	// int ans = 0, x;
	// while (p < n) {

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