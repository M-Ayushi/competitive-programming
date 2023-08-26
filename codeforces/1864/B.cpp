#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<char> a, b;
	if (k % 2) {
		for (int i = 0; i < n; ++i) {
			if (i % 2) a.push_back(s[i]);
			else b.push_back(s[i]);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int c = 0;
		for (int i = 0; i < n; ++i) {
			if (i % 2) {
				cout << a[c];
				++c;
			}
			else {
				cout << b[c];
			}
		}
		cout << "\n";
	}
	else {
		sort(s.begin(), s.end());
		cout << s << "\n";
	}
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
