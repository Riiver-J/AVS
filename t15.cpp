#include <iostream>
using namespace std;

class Box {
	int width, height, length;
public:
	Box(int w=0,int h=0,int l=0) {
		width = w;
		height = h;
		length = l;
	}
	void display() {
		cout << "(" << length << ", " << width << ", " << height << ")" << endl;
	}

	Box& operator=(const Box& b2) {
		this->length = b2.length;
		this->width = b2.width;
		this->height = b2.height;

		return*this;
	}
};

int main() {
	Box b1(10, 20, 30), b2;
	b1.display();
	b2 = b1;
	b2.display();
}
