#include <iostream>
using namespace std;
int main() {
	int a, i = 1;
	cin >> a;
	while (i < a) {
		i = i * 2;
	}
	if ((1 == a) || (i == a)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}