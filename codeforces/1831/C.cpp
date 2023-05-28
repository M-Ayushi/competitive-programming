#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int x[n-1], y[n-1];
	vector<int> p(n+1, -1);
	vector<int> l(n+1, -1);
	vector<int> s(n+1, -1);
	vector<vector<int>> c(n+1);
	for (int i = 0; i < n-1; ++i) {
		cin >> x[i] >> y[i];
		c[x[i]].push_back(y[i]);
		c[y[i]].push_back(x[i]);
	}
	p[1] = 0;
	l[1] = 1;
	vector<int> v;
	v.push_back(1);
	for (int i = 0; i < n; ++i) {
		for (auto z : c[v[i]]) {
			if (p[z] == -1) {
				p[z] = v[i];
				// l[z] = l[v[i]]+1;
				v.push_back(z);
			}
		}
	}
	vector<bool> d(n+1, 0);
	d[1] = 1;
	for (int i = 0; i < n-1; ++i) {
		if (x[i] == p[y[i]]) {
			d[y[i]] = 1;
			if (d[x[i]] == 1) s[y[i]] = 1;
			else s[y[i]] = 0;
		}
		else if (p[x[i]] == y[i]) {
			d[x[i]] = 1;
			if (d[y[i]] == 1) s[x[i]] = 1;
			else s[x[i]] = 0;
		}
	} 
	v.clear();
	v.push_back(1);
	int ans = 1;
	for (int i = 0; i < n; ++i) {
		for (auto z : c[v[i]]) {
			if (p[z] == v[i]) {
				if (s[z]) l[z] = l[v[i]];
				else l[z] = l[v[i]]+1;
				ans = max(ans, l[z]);
				v.push_back(z);
			}
		}
	}
	// for (auto z : l) cout << z << " ";
	// cout << "\n";
	cout << ans << "\n";
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