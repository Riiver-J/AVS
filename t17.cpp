#include <iostream>
using namespace std;
const int SIZE = 10;

class MyArray {
	int a[SIZE];

public:
	MyArray() {
		for (int i = 0; i < SIZE; i++)
			a[i] = 0;
	}
	int& operator[](int i) {
		if (i >= SIZE) {
			cout << "잘못된인덱스";
			return a[0];
		}
		return a[i];
	}
};
int main() {
	MyArray a;
	a[3] = 10;
	cout << a[3] << endl;
	cout << a[16] << endl;	//연산자중복코드가있어서 여기서에러안남
}