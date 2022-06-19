#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n, m;
		cin >> n >> m;

		ll x = (m*(m-1))/2;
		ll y = (n*(n+1))/2;
		ll ans = x + (m*y);
		//cout << x << " " << y << "\n";
		cout << ans << "\n";
	}
	
    return 0;
}
