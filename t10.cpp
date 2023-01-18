#include <iostream>
using namespace std;

class Box {
	int length, width, height;

public:
	static int cnt;
	Box(int l, int w, int h) {
		length = l;
		width = w;
		height = h;
		cnt++;
	}
	int getVolumne() {
		return length * width * height;
	}
	int getCnt() {

	}
};
int Box::cnt = 0;

int main() {
	//°´Ã¼3°³»ý¼º
	Box b1(10,20, 30);
	Box b2(20, 30, 40);
	Box b3(30, 40, 50);


}