#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector <int> a;
		vector <int> b;
		
		int x;
		for (int i = 0; i < n; i++) {
			cin >> x;
			if (count(a.begin(), a.end(), x) > 0) {
				b.push_back(x);
			}
			else {
				a.push_back(x);
			}
		}
		sort(a.begin(), a.end());
		for (auto j : a) {
			cout << j << " ";
		}
		for (auto j : b) {
			cout << j << " ";
		}
		cout << "\n";
	}
	
    return 0;
}
