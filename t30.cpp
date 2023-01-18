#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	void prn() {
		cout << "부모클래스의 prn()함수" << endl;
	}
};

class Child : Parent {
	int data;
public:
	void prn() {
		Parent::prn();
		cout << "자식 클래스의 prn()함수" << endl;
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