#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

// string ans = "NO\n";
// int a[1000][1000];
// int p;

// void val(int n, int m, int x, int y, int s, int c) {
// 	s += a[x][y];
// 	if (x == n-1 && y == m-1) {
// 		// cout << "s : " << s << "\n";
// 		if (s == 0) ans = "YES\n";
// 	}

// 	if (x < n-1 && abs(s) <= p-c) {
// 		val(n, m, x+1, y, s, c+1);
// 	}
// 	if (y < m-1 && abs(s) <= p-c) {
// 		val(n, m, x, y+1, s, c+1);
// 	}
// }

// int mn[1001], mx[1001];

int a[1000][1000];
int b[1000][1000];
int c[1000][1000];

pair<int, int> val (int x, int y) {
	// cout << "coords : " << x << " " << y << "\n";
	int mn, mx;

	// if (x) {
	// 	p1 = val(x-1, y);
	// }
	// if (y) {
	// 	p2 = val(x, y-1);
	// }

	// cout << "coords : " << x-1 << " " << y << "\n";
	// cout << p1.first << " " << p1.second << "\n";
	// cout << "coords : " << x << " " << y-1 << "\n";
	// cout << p2.first << " " << p2.second << "\n";
	// mn += min(p1.first, p2.first);
	// mx += max(p1.second, p2.second);

	// return make_pair(mn, mx);
	

	if (b[x][y] == -1) {
		mn = a[x][y], mx = a[x][y];
		pair<int, int> p1, p2;

		if (x && y) {
			p1 = val(x-1, y);
			p2 = val(x, y-1);
			mn += min(p1.first, p2.first);
			mx += max(p1.second, p2.second);
		} 
		else if (x == 0 && y) {
			p1 = val(x, y-1);
			mn += p1.first;
			mx += p1.second;
		}
		else if (y == 0 && x) {
			p1 = val(x-1, y);
			mn += p1.first;
			mx += p1.second;
		}

		b[x][y] = mn;
		c[x][y] = mx;
		// cout << "Found\n";
	}
	else {
		mn = b[x][y];
		mx = c[x][y];
	}

	// cout << "coords : " << x << " " << y << "\n";
	// cout << mn << " " << mx << "\n";

	return make_pair(mn, mx);
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		// int a[n][m];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> a[i][j];
				b[i][j] = -1, c[i][j] = -1;
			}
		}

		if ((n + m) % 2) {
			// cout << "n and m : " << n << " " << m << "\n";
			pair<int, int> ans = val(n-1, m-1);
			if (ans.first <= 0 && ans.second >= 0) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
		// cout << "\n";

		// ans = "NO\n";
		// //p = ((n+m-2)*(n+m-3))/2;
		// p = (n+m)-1;
		// if ((n + m) % 2) val(n, m, 0, 0, 0, 0);
		// cout << ans; // << "\n";
	}
	
    return 0;
}
