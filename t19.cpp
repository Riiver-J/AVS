#include <iostream>
using namespace std;

class Box {
	int length, width, height;

public:
	Box(int l,int w,int h) {
		length = l;
		width = w;
		height = h;
	}
	friend void prnBox(Box box);
};

void prnBox(Box box) {
	cout << "Box(" << box.length << "," << box.width << ","
		<< box.height << ")" << endl;
}

int main() {
	Box b(10, 20, 30);
	prnBox(b);
}