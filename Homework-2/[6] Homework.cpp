#include "iostream"
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	a = a * c;
	b = b * c;
	cout << (a + b) / 100 << " " << b % 100;
	cin.get();
	cin.get();
	return 0;
}