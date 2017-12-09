#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "Vedit Cheslo" << endl;
	cin >> a;
	if (a > 0) {
		a = a + 1;
	}
	else {
		a = a + 0;
	}
	cout << "Byde " << a << endl;
	system("pause");
}
