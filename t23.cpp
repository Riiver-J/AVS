#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed;
	string color;
public:
	Car(int s, string c) {
		speed = s;
		color = c;
	}
	void show() {
		cout << "속도 " << speed << endl;
		cout << "색상 " << color << endl;
	}
	int getSpeed() { return speed; }
	string getColor() { return color; }
};

class SportsCar :public Car {
	bool turbo;

public:
	SportsCar(int t,int speed, string color):Car(speed,color) {
		turbo = t;
	}
	void show() {
		cout << "속도 " << getSpeed << endl;
		cout << "색상 " << getColor << endl;
		cout << "터보 유무 " << turbo << endl;
	}
};

int main() {
	Car c(100, "yello");
	c.show();
	SportsCar sc(true, 200, "red");
	sc.show();
}