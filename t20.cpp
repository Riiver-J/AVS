#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "���� �Է� ";
	cin >> num;

	try {
		if (num < 100) throw - 1;
		else throw 'c';
	}
	catch (int e) {
		cout << e << "�߸��Է�" << endl;
	}
	catch (char e) {
		cout << e << "�߸��Է�" << endl;
	}
}