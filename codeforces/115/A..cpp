#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 2002;
vector<vector<int>> v(N);
vector<int> depth(N, -1);

void dfs(int x, int l) {
	depth[x] = l;
	for (auto y : v[x]) {
		dfs(y, l+1);
	}
}

void solve() {
	int n, ans = 0;
	cin >> n;
	
	int a[n];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] != -1) {
			v[a[i]].push_back(i);
		}
		else depth[i] = 1;
	}

	for (int i = 1; i <= n; ++i) {
		if (depth[i] == 1) dfs(i, 1);
	}
	for (int i = 1; i <= n; ++i) {
		ans = max(ans, depth[i]);
	}
	cout << ans << "\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
	return 0;
}
