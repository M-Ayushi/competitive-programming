#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	map<string, int> c;
	int n, p;
	cin >> n;
	string w[3][n];
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> w[i][j]; 
			c[w[i][j]]++;
		}
	}
	for (int i = 0; i < 3; ++i) {
		p = 0;
		for (int j = 0; j < n; ++j) {
			if (c[w[i][j]] == 1) p += 3;
			else if (c[w[i][j]] == 2) p += 1;
		}
		cout << p << " ";
	}
	cout << "\n";
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