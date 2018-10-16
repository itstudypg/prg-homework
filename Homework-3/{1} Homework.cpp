#include "iostream"
using namespace std;
int main() {
	int i = 1, a;
	cin >> a;
	while (a >= i * i) {
		cout << i * i << " ";
		i++;
	}
	cin.get();
	cin.get();
	return 0;
}