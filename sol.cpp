#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--) {
		long long l, r;
		cin >> l >> r;
		long long a = max(l, r) + 1;
		bool checker = true;
		if ((double) a / 2 > l % a) {
			checker = false;
		}
		if ((double) a / 2 > r % a) {
			checker = false;
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
