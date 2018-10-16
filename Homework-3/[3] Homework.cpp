#include "iostream"
using namespace std;
int main() {
	int a;
	cin >> a;
	for (int i = 1; a >= i; i = i * 2) {
		cout << i << " ";
	}
	cin.get();
	cin.get();
	return 0;
}