#include <iostream>
#include <exception>
using namespace std;

int main() {
	try {
		int* p = new int[100];
		p[300] = 3;
		delete p;
	}
	catch (exception& p) {
		cout << "ǥ�� ���� �߻�" << p.what() << endl;
	}
}