#include <iostream>
using namespace std;

int main() {
	int pizza_slices = 0;
	int person = -1;
	int slice_per_person = 0;

	cout << "���������� �Է��Ͻÿ�";
	cin >> pizza_slices;
	cout << "������� �Է��Ͻÿ�";
	cin >> person;

	try {
		if (person == 0) throw person;
		slice_per_person = pizza_slices / person;
		cout << "�ѻ���� ���ڴ�" << slice_per_person << endl;
	}
	catch (int e) {
		cout << "����� " << e << "�� �Դϴ�." << endl;

	}
}