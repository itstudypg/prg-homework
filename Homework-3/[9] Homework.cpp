#include <iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> x2 >> y1 >> y2;
	if (((x2 - x1 == 0) || (x2 - x1 == 1) || (x2 - x1 == -1)) && ((y2 - y1 == 0) || (y2 - y1 == 1) || (y2 - y1 == -1))) {
		cout << "YES" << endl;
	} else {
		cout <<"NO" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}
