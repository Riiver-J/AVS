#include <iostream>
using namespace std;

int main() {
	int pizza_slices = 0;
	int person = -1;
	int slice_per_person = 0;

	cout << "피자조각을 입력하시오";
	cin >> pizza_slices;
	cout << "사람수를 입력하시오";
	cin >> person;

	try {
		if (person == 0) throw person;
		slice_per_person = pizza_slices / person;
		cout << "한사람당 피자는" << slice_per_person << endl;
	}
	catch (int e) {
		cout << "사람은 " << e << "명 입니다." << endl;

	}
}