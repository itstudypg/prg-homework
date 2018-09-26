#include "iostream"
using namespace std;
int main() {
	int i1, i2;
	cout << "Enter the first number" << endl;
	cin >> i1;
	cout << "Enter the second number" << endl;
	cin >> i2;
	if (i1 >= i2) {
		cout << i1 << endl;
	} else { 
		cout << i2 << endl;
	}
	cin.get();
	cin.get();
	return 0;
}