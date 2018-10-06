#include "iostream"
using namespace std;
int main() {
	int i1, i2, i3;
	cin >> i1 >> i2 >> i3;
	if (i1 + i2 > i3 && i2 + i3 > i1 && i1 + i3 > i2) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}