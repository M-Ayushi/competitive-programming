#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)((x).size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	// string f = "";
	// for (int i = 0; i < n; ++i) f += "BAN";
	int s = 2, e = 3*n;
	vector<int> a, b;
	// cout << f << "\n";
	while (s < e) {
		a.push_back(s);
		b.push_back(e);
		// swap(f[s-1], f[e-1]);
		// cout << f << "\n";
		s += 3;
		e -= 3;
		// if (e%3 == 2) --e;
	}
	int l = (int)(a.size());
	cout << l << "\n";
	for (int i = 0; i < l; ++i) {
		cout << a[i] << " " << b[i] << "\n";
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