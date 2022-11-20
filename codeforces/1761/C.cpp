#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == j) a[i][j] = 1;
			else a[i][j] = 0;
		}
	}
	// int a[n];
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < n; ++j) {
			if (s[j] == '1') {
				a[j][i] = 1;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		vector<int> v;
		for (int j = 0; j < n; ++j) {
			if (a[i][j] == 1) {
				v.push_back(j+1);
			}
		}
		cout << sz(v) << " ";
		for (auto x : v) cout << x << " ";
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