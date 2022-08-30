#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;

void solve() {
	ll n, o = 0;
	cin >> n;
	string s; 
	cin >> s;
	//int a[n];
	//int c = 0;
	vector<ll> a;
	for (ll i = 0; i < n/2; ++i) {
		//cout << i << " " << (n-i-1) << "\n";
		if (s[i] == 'L') {
			a.push_back(n-i-(i+1));
			
			o += i;
		}
		else o += n-(i+1);
		//cout << "o : " << o << "\n";

		if (s[n-i-1] == 'R') {
			a.push_back((n-i-1)-i);
			//cout << "now able to see : " << ((n-i-1)-i) << "\n";
			o += i;
		}
		else o += n-(i+1);
		//cout << "o : " << o << "\n";
	}
	if (n % 2 == 1) o += (n/2);
	//cout << "og o : " << o << "\n";
	for (int i = 0; i < sz(a); ++i) {
		o += a[i];
		cout << o << " ";
	}
	for (int i = sz(a); i < n; ++i) {
		cout << o << " ";
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