#include "iostream"
using namespace std;
int main() {
	int a;
	for (int i = 0; ;i++) {
		cin >> a;
		if (a == 0) {
			cout << i << endl;
			break;
		}
	}
	cin.get();
	cin.get();
	return 0;
}