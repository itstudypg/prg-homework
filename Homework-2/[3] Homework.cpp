#include "iostream"
using namespace std;
int main() {
	int i1, i2, i3;
	cin >> i1 >> i2 >> i3;
	if (i1 >= i2 && i1 >= i3) {
		cout << i1 << endl;
	}
	else if (i2 >= i1 && i2 >= i3) {
		cout << i2 << endl;
	}
	else if (i3 >= i1 && i2 >= i2) {
		cout << i3 << endl;
	}
	cin.get();
	cin.get();
	return 0;
}