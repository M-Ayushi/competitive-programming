#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n <= 1399) cout << "Division 4\n";
	else if (n <= 1599) cout << "Division 3\n";
	else if (n <= 1899) cout << "Division 2\n";
	else cout << "Division 1\n";
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
