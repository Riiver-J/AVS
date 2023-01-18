#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(string name) {
		this->name = name;
	}
	string getName() { return name; }
	void showName() {
		cout << "�̸��� " << name << endl;
	}

};

class Student : public Person{
	int studentID;
public:
	Student(int studentID, string name) : Person(name) { //�ݷ��ϰ� �ڿ� �ٿ���
		this->studentID = studentID;
	}
	void show() {
		cout << "name: " << getName << endl;
		cout << "number: " << studentID << endl;
	}
	void showName() {
		cout << "�л��̸�: " << getName() << endl;
	}
};

int main() {
	Student student(1, "ȫ����");
	student.show();
	student.showName();
	Person s("������");
	s.showName();
	student.showName();
}
