#include "iostream"
using namespace std;
int main() {
	int i1, i2;
	cin >> i1 >> i2;
	if (i1 > i2) {
		cout << "1" << endl;
	} else if (i2 > i1) {
		cout << "2" << endl;
	} else if (i1 == i2) {
		cout << "0" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}