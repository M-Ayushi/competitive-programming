#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	map<pair<int, int>, bool> pairs;
	for (int i = 0; i < n-1; ++i) {
		pairs[make_pair(s[i]-'a', s[i+1]-'a')] = 1;
	}
	cout << sz(pairs) << "\n";
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