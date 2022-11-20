#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	if ((a+b) < (n-1) || (a == n && b == n)) cout << "Yes\n";
	else cout << "No\n";
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