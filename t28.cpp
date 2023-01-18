#include <iostream>
using namespace std;

class Person {
	string name;
protected:
	string address;

};

class Student :public Person{
public:
	void setAddress(string addr) {
		address = addr;
	}
	string getAddress() {
		return address;
	}
};

int main() {
	Student obj,obj2;
	obj.setAddress("경기도 수원시 영통구");
	cout << obj.getAddress() << endl;

	obj2.setAddress("대전 중구 성심당");
	cout << obj2.getAddress() << endl;
}