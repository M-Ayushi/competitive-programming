#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x.size())
using namespace std;

void solve() {
	priority_queue<int> left;
	priority_queue<int, vector<int>, greater<int> > right;
	int n, a, b, c;
	cin >> n;
	string q;
	for (int i = 0; i < n; ++i) {
		cin >> q >> a >> b;
		if (q == "+") {
			left.push(a*2);
			right.push(b*2);
		}
		else {
			left.push((a*2)+1);
			right.push((b*2)-1);
		}

		c = 0;
		while (left.top() % 2 || right.top() % 2) {
			while (left.top() % 2) {
				++c;
				left.pop();
			}
			while (c > 0) {
				left.pop();
				--c;
			}

			while (right.top() % 2) {
				++c;
				right.pop();
			}
			while (c > 0) {
				right.pop();
				--c;
			}
		}

		if (right.top() < left.top()) cout << "YES\n";
		else cout << "NO\n";
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	
	return 0;
}
