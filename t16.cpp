#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "두 수를 입력하시오";
	cin >> num1 >> num2;

	try {
		if (num2 == 0) throw num2;
		cout << "나눗셈 몫 " << num1 / num2 << endl;
		cout << "나눗셈 나머지" << num1 % num2 << endl;
	}
	catch (int e) {
		cout << "제수는 " << e << "이 될 수 없습니다" << endl;
		cout << "프로그램을 다시 실행하시오" << endl;
	}
}