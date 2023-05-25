#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int o1 = 0, c1 = 0, o2 = 0, c2 = 0;
	vector<int> ans;
	// bool p = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '(') {
			if (c2 > o2) {
				ans.push_back(2);
				++o2;
			}
			else {
				ans.push_back(1);
				++o1;
			}
		}
		else {
			if (o1 > c1) {
				ans.push_back(1);
				++c1;
			}
			else {
				ans.push_back(2);
				++c2;
			}
		}
	}
	if (o1 == c1 && o2 == c2) {
		if (min(o1, o2) == 0) {
			cout << "1\n";
			for (int i = 0; i < n; ++i) {
				cout << "1 ";
			}
			cout << "\n";
		}
		else {
			cout << "2\n";
			for (int i = 0; i < n; ++i) {
				cout << ans[i] << " ";
			}
			cout << "\n";
		}
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