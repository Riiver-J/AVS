#include <iostream>
using namespace std;

class Remotecontrol {
public:
	virtual void turnOn() = 0;
	virtual void turnOff() = 0;
};

class TV : public Remotecontrol {
public:
	void turnOn() {
		cout << "ÄÑ´Ù" << endl;
	}
	void turnOff() {
		cout << "²ô´Ù" << endl;
	}
};

int main() {
	TV t;
	t.turnOn();
}