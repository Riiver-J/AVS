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
		cout << "피자 조각수";
		cin >> pizza_slice;
		cout << "사람 인원수";
		cin >> person;
		slice_per_person = divPizza(pizza_slice,person);
		cout << "한 사람당 피자 조각수는" << slice_per_person << endl;
	}
	catch (int e) {
		cout << "사람수가 " << e << "명 입니다" << endl;
		cout << "다시 입력하시오" << endl;

	}
}

