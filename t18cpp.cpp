#include <iostream>
using namespace std;

int divPizza(int pizza_slice, int person) {
	if (person == 0) throw person;
	return pizza_slice / person;
}
int main() {
	int pizza_slice = 0;
	int person = 0;
	int slice_per_person = 0;

	try {
		cout << "���� ������";
		cin >> pizza_slice;
		cout << "��� �ο���";
		cin >> person;
		slice_per_person = divPizza(pizza_slice,person);
		cout << "�� ����� ���� ��������" << slice_per_person << endl;
	}
	catch (int e) {
		cout << "������� " << e << "�� �Դϴ�" << endl;
		cout << "�ٽ� �Է��Ͻÿ�" << endl;

	}
}

