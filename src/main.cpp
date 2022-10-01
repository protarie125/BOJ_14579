#include <iostream>
#include <utility>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	constexpr auto mod = int{ 14579 };

	int a, b;
	cin >> a >> b;

	auto ans = int{ 1 };
	for (auto i = a; i <= b; ++i) {
		ans *= i * (i + 1) / 2;
		ans %= mod;
	}

	cout << ans;

	return 0;
}