#include "iostream"
using namespace std;
int main() {
	int a, i=2;
	cin >> a;
	while (a % i != 0) {
		i++;
	} 
	cout << i << endl;
	cin.get();
	cin.get();
	return 0;
}