#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n % 2) {
		for (int i = 0; i < n; ++i) {
			cout << "2 ";
		}
	}
	else {
		for (int i = 0; i < n-2; ++i) {
			cout << "2 ";
		}
		cout << "3 1";
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