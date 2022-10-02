#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n, ans = 0;
	cin >> n;
	int a[n];
	//cin >> a[0];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		/*if (a[i] > m) {
			ans += (a[i]/m)-1;
		}*/
	}
	int s = ((a[0]*2)-1); //, m = a[0]; //, c = 0;
	//int x = 0;
	for (int i = n-1; i >= 0; --i) {
		ans += a[i]/s;
		if (a[i]%s == 0) ans -= 1;
		// if (a[i] >= s) {
		// 	if (a[i]%s) ans += 1;
		// 	else ans -= 1;
		// }

		//++x;
		//cout << i << " " << s << " " << m << "\n";
		//ans += (c+1)*(a[i]/a[i-1]);
		// ans += a[i]/s;
		// if (a[i] % s == 0) --ans;
		// else if ((a[i] % s) < m) {
		// 	//m = (a[i] % s);
		// 	//m = m/2;
		// 	if (m % 2) s = m;
		// 	else s = (m+1);
		// 	m = (s+1)/2;
		// 	ans = 0;
		// 	//s = ((m*2)-1);
		// 	i = n;
		// }
		//cout << ans << "\n";
	}
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