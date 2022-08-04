#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, ans;
	cin >> n;
	if (n == 1) ans = 2;
	else if (n % 3 == 0) ans = n/3;
	else if (n % 3 == 1) ans = (n/3)+1;
	else ans = (n/3)+1;
	cout << ans << "\n";
	
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
