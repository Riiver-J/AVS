#include <iostream>
using namespace std;

class A {
private:
	string secret;
public:
	friend class B;
	A(string s = "") { secret = s; }
};

class B {
public:
	B(){}
	void prn(A obj) {
		cout << obj.secret << endl;
	}
};

int main() {
	A a("Äª±¸Äª±¸");
	B b;
	b.prn(a);
}