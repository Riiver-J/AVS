#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "�� ���� �Է��Ͻÿ�";
	cin >> num1 >> num2;

	try {
		if (num2 == 0) throw num2;
		cout << "������ �� " << num1 / num2 << endl;
		cout << "������ ������" << num1 % num2 << endl;
	}
	catch (int e) {
		cout << "������ " << e << "�� �� �� �����ϴ�" << endl;
		cout << "���α׷��� �ٽ� �����Ͻÿ�" << endl;
	}
}