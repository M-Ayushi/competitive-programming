#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n, p = 0;
	cin >> n;
	int a;
	vector<int> s, t;
	s.push_back(n+1);
	t.push_back(n+1);
	for (int i = 0; i < n; ++i) {
		cin >> a; //[i];
		// if (i > 0 && a[i] > a[i-1]) ++p;
		if (a <= s.back() && a <= t.back()) {
			if (s.back() < t.back()) s.push_back(a);
			else t.push_back(a);
		}
		else if (a <= s.back()) {
			s.push_back(a);
		}
		else if (a <= t.back()) {
			t.push_back(a);
		}
		else {
			++p;
			if (s.back() < t.back()) s.push_back(a);
			else t.push_back(a);
		}
	}

	cout << p << "\n";
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
