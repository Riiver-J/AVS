#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "숫자 입력 ";
	cin >> num;

	try {
		if (num < 100) throw - 1;
		else throw 'c';
	}
	catch (int e) {
		cout << e << "잘못입력" << endl;
	}
	catch (char e) {
		cout << e << "잘못입력" << endl;
	}
}