#include "iostream"
#include "cmath"
#include "math.h"
using namespace std;



int main() {

	float z1, z2, a, M_PI = 3.14159;
	cin >> a;
	a = (a * M_PI) / 180;
	z1 = pow(sin(3 * M_PI - 2 * a), 2)*pow(cos(5 * M_PI + 2 * a), 2);
	z2 = 1 / 4 - 1 / 4 * sin((5 / 2) * M_PI - (8 * a));
	
	
	if (abs(z1 - z2) < 0.001) {
		cout << "z1 = z2" << endl;
	}
	else {
		cout << "z1 != z2" << endl;
	}
	return 0;
}


