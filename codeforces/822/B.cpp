#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, m, c, ans = 0, p = 0;
	cin >> n >> m;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i <= m-n; ++i) {
		//cout << i << " ";
		c = 0;
		for (int j = 0; j < n; ++j) {
			if (b[i+j] == a[j]) ++c;
		}
		if (c > ans) {
			p = i;
			ans = c;
		}
	}
	//cout << p << "\n";
	cout << (n-ans) << "\n";
	for (int j = 0; j < n; ++j) {
		if (b[p+j] != a[j]) {
			cout << (j+1) << " ";
		}
	}
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}