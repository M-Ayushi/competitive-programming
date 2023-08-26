#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int a, b, n;
	cin >> a >> b >> n;
	int c = (n * (n-1))/2;
	if (c <= b-a) {
		cout << a << " ";
		int z = b-c;
		for (int i = n-1; i > 0; --i) {
			z += i;
			cout << z << " ";
		}
		cout << "\n";
	}
	else cout << "-1\n";
	
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
