#include "iostream"
using namespace std;
int main() {
	int N;
	cin >> N;
	if (N / 1000 == N % 10 && N / 100 % 10 == N / 10 % 10) {
		cout << "1" << endl;
	} else {
		cout << "0" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}