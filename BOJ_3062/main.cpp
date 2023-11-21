#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int T;
	cin >> T;
	while (0 < (T--)) {
		string s;
		cin >> s;

		auto iss = istringstream{ s };
		int a;
		iss >> a;

		reverse(s.begin(), s.end());
		iss = istringstream{ s };
		int b;
		iss >> b;

		const auto c = a + b;
		auto oss = ostringstream{};
		oss << c;

		string u = oss.str();
		auto found = bool{ false };
		for (auto i = 0; i < u.length(); ++i) {
			if (u[i] != u[u.length() - 1 - i]) {
				cout << "NO\n";
				found = true;
				break;
			}
		}

		if (!found) {
			cout << "YES\n";
		}
	}

	return 0;
}