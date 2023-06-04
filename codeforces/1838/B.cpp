#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n; //, x = -1, y = -1; //, z = -1;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[a[i]-1] = i;
	}
	if (b[0] < b[n-1] && b[n-1] < b[1]) {
		cout << "1 1\n";
	}
	else if (b[0] > b[n-1] && b[n-1] > b[1]) {
		cout << "1 1\n";
	}
	else if (abs(b[0] - b[n-1]) > abs(b[1] - b[n-1])){
		cout << b[1]+1 << " " << b[n-1]+1 << "\n";
	}
	else {
		cout << b[0]+1 << " " << b[n-1]+1 << "\n";
	}
	// int l = b[0], r = b[0];
	// for (int i = 1; i < n; ++i) {
	// 	l = min(b[i], l);
	// 	r = max(b[i], r);
	// 	if ((r - l) == i) {
	// 		if (n-l > r) {
	// 			cout << r+1 << " " << n << "\n";
	// 			return;
	// 		}
	// 		else {
	// 			cout << l+1 << " 1\n";
	// 			return;
	// 		}
	// 	}
	// } 
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