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
		cout << "�ӵ� " << speed << endl;
		cout << "���� " << color << endl;
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
		cout << "�ӵ� " << getSpeed << endl;
		cout << "���� " << getColor << endl;
		cout << "�ͺ� ���� " << turbo << endl;
	}
};

int main() {
	Car c(100, "yello");
	c.show();
	SportsCar sc(true, 200, "red");
	sc.show();
}