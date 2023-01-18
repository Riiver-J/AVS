#include <iostream>
#include <string>
using namespace std;

class Shape {
	int x;
	int y;
public:
	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
};

class Rectangle :public Shape{
	int width;
	int height;
public:
	void setWidth(int w) {
		this->width = w;
	}
	void setHeight(int h) {
		this->height = h;
	}
	int getArea() {	//매개변수받아올필요가없음.왜?
		return (width * height);
	}
};

int main() {
	Rectangle r;
	r.setHeight(10);
	r.setWidth(5);
	cout << "사각형의넓이는" << r.getArea << endl;
}