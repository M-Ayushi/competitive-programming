#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	int m = 2*n, x = 1;
	for (int i = 0; i < n; ++i) {
		if (i % 2) {
			cout << (x*2) << " ";
			++x;
		}
		else cout << (m-i) << " ";
		
	} 
	cout << "\n";
	for (int i = 0; i < n; ++i) {
		if (i % 2) {
			cout << (n+i) << " ";
		}
		else cout << (i+1) << " ";
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