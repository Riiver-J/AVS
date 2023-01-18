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
		cout << "이름은 " << name << endl;
	}

};

class Student : public Person{
	int studentID;
public:
	Student(int studentID, string name) : Person(name) { //콜론하고 뒤에 붙여야
		this->studentID = studentID;
	}
	void show() {
		cout << "name: " << getName << endl;
		cout << "number: " << studentID << endl;
	}
	void showName() {
		cout << "학생이름: " << getName() << endl;
	}
};

int main() {
	Student student(1, "홍다윗");
	student.show();
	student.showName();
	Person s("조성연");
	s.showName();
	student.showName();
}
