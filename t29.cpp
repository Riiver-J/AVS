#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	void speak() {
		cout << "悼拱篮 家府甫 辰促" << endl;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "港港 " << endl;
	}
};

int main() {
	Animal a;
	Dog d;
	a.speak();
	d.speak();
}