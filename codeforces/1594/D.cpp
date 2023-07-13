#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

const int N = 2e5;
vector<int> p(2*N);
vector<array<int, 2>> cnt(2*N);
vector<int> d(N);

int getSet(int x) {
	if (p[x] != x) p[x] = getSet(p[x]);
	return p[x];
}

void unite(int x, int y) {
	int px = getSet(x), py = getSet(y);
	if (px == py) return;
	if (cnt[px][0]+cnt[px][1] < cnt[py][0]+cnt[py][1]) {
		swap(px, py);
	}
	p[py] = px;
	cnt[px][0] += cnt[py][0];
	cnt[px][1] += cnt[py][1];
}

void solve() {
	// cout << "\n\n";
	// iota(p.begin(), p.end(), 0);
	int n, e, x, y, ans = 0;
	cin >> n >> e;
	for (int i = 0; i < n; ++i) {
		cnt[i][0] = 1;  
		cnt[i][1] = 0;  
		cnt[i+n][0] = 0;  
		cnt[i+n][1] = 1;  
		d[i] = 0;
		p[i] = i, p[i+n] = i+n;
	}
	string s;
	for (int i = 0; i < e; ++i) {
		cin >> x >> y >> s;
		--x;
		--y;
		if (s == "imposter") {
			unite(x, y+n);
			unite(x+n, y);
		}
		else {
			unite(x, y);
			unite(x+n, y+n);
		}
	}

	for (int i = 0; i < n; ++i) {
		// cout << i << "-" << getSet(i) << "\n";
		if (getSet(i) == getSet(i+n)) {
			cout << "-1\n";
			return;
		}
		if (getSet(i) == i) {
			ans += max(cnt[i][0], cnt[i][1]);
			// cout << i << " " << cnt[i][0] << " " << cnt[i][1] << "\n";
		}
	}
	cout << ans << "\n";

	// for (int i = 0; i < n; ++i)  {
	// 	if (getSet(i) == getSet(i+n)) {
	// 		cout << "-1\n";
	// 		return;
	// 	}
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
