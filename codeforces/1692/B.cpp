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
		map<int, bool> pre;
		int n;
		cin >> n;
		int a, x = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a;
			if (pre[a]) ++x;
			else pre[a] = 1;
		}

		x += x%2;
		int ans = n-x;
		cout << ans << "\n";
	}
	
    return 0;
}
