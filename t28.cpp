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
	obj.setAddress("��⵵ ������ ���뱸");
	cout << obj.getAddress() << endl;

	obj2.setAddress("���� �߱� ���ɴ�");
	cout << obj2.getAddress() << endl;
}