#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	ll n, q, x, y, z, m;
	cin >> n >> q;
	m = ((n*n)+1)/2;
	while (q--) {
		cin >> x >> y;
		z = ((((x-1)*n)+y)+1)/2;
		if ((x+y) % 2) z += m;
		cout << z << "\n";
	}
	return;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
    return 0;
}