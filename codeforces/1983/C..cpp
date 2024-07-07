#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a;
	ll s[3][n+1], ans[3][2];
	ans[0][0] = -1;
	for (int j = 0; j < 3; ++j) {
		s[j][0] = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a;
			s[j][i+1] = s[j][i] + a;
		}
	}

	int l, r;
	ll t = (s[0][n]+2)/3;
	for (int j = 0; j < 3; ++j) { 
		l = 1, r = 2;
		while (l < n && r < n) {
			if ((s[j][r]-s[j][l]) >= t) {
				if (s[(j+1)%3][l] >= t && (s[(j+2)%3][n] - s[(j+2)%3][r]) >= t) {
					ans[j][0] = (l+1);
					ans[j][1] = r;
					ans[(j+1)%3][0] = 1;
					ans[(j+1)%3][1] = l;
					ans[(j+2)%3][0] = r+1;
					ans[(j+2)%3][1] = n;
				}
				if (s[(j+2)%3][l] >= t && (s[(j+1)%3][n] - s[(j+1)%3][r]) >= t) {
					ans[j][0] = (l+1);
					ans[j][1] = r;
					ans[(j+1)%3][0] = r+1;
					ans[(j+1)%3][1] = n;
					ans[(j+2)%3][0] = 1;
					ans[(j+2)%3][1] = l;
				}
				if ((s[j][r]-s[j][l+1]) >= t) ++l;
				else ++r;
			}
			else ++r;
		}
	}
	if (ans[0][0] == -1) cout << "-1\n";
	else {
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 2; ++j) cout << ans[i][j] << " ";
		}
		cout << "\n";
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
