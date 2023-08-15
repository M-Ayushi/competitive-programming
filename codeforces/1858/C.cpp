#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n; //, c = 0, score, ans = 0;
	cin >> n;

	vector<bool> d(n+1, 0);
	for (int i = 1; i <= n; ++i) {
		if (d[i] == 0) {
			for (int j = i; j <= n; j = j*2) {
				d[j] = 1;
				cout << j << " ";
			}
		}
	}
	cout << "\n";
	// vector<vector<int>> v;
	// for (int i = 1; i <= n; ++i) {
	// 	if (d[n] == 0) {
	// 		for (int j = i; j <= n; j = j*2) {
	// 			d[j] = 1;
	// 			v[c].push_back(j);
	// 		}
	// 		++c;
	// 	}
	// }

	// for (int i = 0; i < c; ++i) {
	// 	if (i % 2) {
	// 		for (int j = sz(v[i])-1; j >= 0; --j) {
	// 			cout << 
	// 		} 
	// 	}
	// }

	// vector<int> v = {1, 2, 4, 8, 6, 3, 5, 10, 7, 9};
	// // do {
	// 	score = 0;
	// 	for (int i = 0; i < n; ++i) {
	// 		score += gcd(v[i], v[(i+1)%n]);
	// 		// cout << v[i] << " ";
	// 	}
	// 	// cout << "\nScore = " << score << "\n";
	// 	if (score == 10) {
	// 		for (auto x : v) {
	// 			cout << x << " ";
	// 		} 
	// 		cout << "\n";
	// 	}
	// 	ans = max(ans, score);
	// // } while (next_permutation(v.begin(), v.end()));
	// cout << "Max Score = " << ans << "\n";
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
