#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	int ans = 1;
	int m = n;
	while (n > 9) {
		ans *= 10;
		n /= 10;
	}
	m -= ans;
	cout << m << "\n";
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	
    return 0;
}
