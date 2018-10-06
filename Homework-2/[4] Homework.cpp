#include "iostream"
using namespace std;
int main() {
	int i1, i2, i3;
	cin >> i1 >> i2 >> i3;
	if (i1 == i2 && i2 == i3) {
		cout << "3" << endl;
	} else if (i1 == i2 || i2 == i3 || i1 == i3) {
		cout << "2" << endl;
	} else {
		cout << "0" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}