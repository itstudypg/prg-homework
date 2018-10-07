#include "iostream"
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == c || b == d) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}
// ¬ условии задачи небольша€ ошибка, т.к за 1 ход ладь€ не может из точки 4 4 перейти в току 5 5.