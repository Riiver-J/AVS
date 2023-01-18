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
	int getArea() {	//�Ű������޾ƿ��ʿ䰡����.��?
		return (width * height);
	}
};

int main() {
	Rectangle r;
	r.setHeight(10);
	r.setWidth(5);
	cout << "�簢���ǳ��̴�" << r.getArea << endl;
}