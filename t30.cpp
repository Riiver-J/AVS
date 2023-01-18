#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	void prn() {
		cout << "�θ�Ŭ������ prn()�Լ�" << endl;
	}
};

class Child : Parent {
	int data;
public:
	void prn() {
		Parent::prn();
		cout << "�ڽ� Ŭ������ prn()�Լ�" << endl;
	}
	void prn(int d) {
		data = d;
		cout << data << endl;
	}
};

int main() {
	Child c;
	c.prn();

	Parent p;
	p.prn();

	c.prn(3);
}