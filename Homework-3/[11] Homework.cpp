#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b && b >= c) cout << c << " " << b << " " << a;
	else if (b >= a && a >= c) cout << c << " " << a << " " << b << endl;
	else if (a >= c && c >= b) cout << b << " " << c << " " << a << endl;
	else if (c >= b && b >= a) cout << a << " " << b << " " << c << endl;
	else if (b >= c && c >= a) cout << a << " " << c << " " << b << endl;
	cin.get();
	cin.get();
	return 0;
}