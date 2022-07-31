#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, m; //, s = 1e9;
	cin >> n >> m;
	int a;
	// vector<bool> h(n, 0);
	// map<int, bool> h;
	priority_queue<int> h;
	for (int i = 0; i < m; ++i) {
		cin >> a;
		// s = min(s, a);
		// h[a-1] = 1;
		h.push(a);
	}
	// --s;

	vector<int> g;
	// int c = 0, ,
	int l = h.top(), f = h.top(), ans = 0;
	h.pop();

	while (!h.empty()) {
		g.push_back(l-h.top()-1);
		l = h.top();
		h.pop();
		// cout << h.top() << " ";
		// h.pop();
	}

	// for (int i = s+1; i < n; ++i) {
	// 	if (h[i]) {
	// 		g.push_back(c);
	// 		c = 0;
	// 	}
	// 	else ++c;
	// }

	g.push_back((l-1)+(n-f));

	sort(g.begin(), g.end());

	int x = 0;
	for (int i = sz(g)-1; i >= 0; --i) {
		// if (i > 0) ans += max(0, (g[i]-1-x));
		// else if (g[i]-x > 0) ans += 1;

		if (g[i]-x == 1) ans += 1;
		else ans += max(0, (g[i]-1-x));
		// else if (g[i]-x > 0) ans += 1;

		x += 4;
	}

	
	// for (auto y : g) cout << y << " ";
	// cout << "\n";

	cout << (n-ans) << "\n";

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
