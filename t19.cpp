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
		cout << "표준 예외 발생" << p.what() << endl;
	}
}