#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, ans;
	cin >> n;
	int r = sqrt(n);
	if (r*r == n) ans = r*4;
	else if (r*(r+1) >= n) ans = (r*4) + 2;
	else ans = (r+1)*4;
	cout << ans << "\n";
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}