#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int D, d, a, b, c;
		cin >> D >> d >> a >> b >> c;
		int sum = 0;
		// if the product of 'D' and  'd' is greater than or equal to
		// to any of the categories, then store the prize for that category
		sum = (D * d >= 10 ? a : sum);
		sum = (D * d >= 21 ? b : sum);
		sum = (D * d >= 42 ? c : sum);
		cout << sum << '\n';
	}
	return 0;
}
