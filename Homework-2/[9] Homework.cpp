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
// � ������� ������ ��������� ������, �.� �� 1 ��� ����� �� ����� �� ����� 4 4 ������� � ���� 5 5.