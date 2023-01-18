#include <iostream>
using namespace std;

class Circle {
	int radius;
	int x, y;
public:
	static int count;
	Circle() {
		x = 0; y = 0; radius = 0;
		count++;
	}
	Circle(int x, int y, int r) {
		this->x = x;
		this->y = y;
		radius = r;
		count++;
	}
	static int getCount() {
		return count;
	}
};
int Circle::count = 0;

int main() {
	Circle c1;
	Circle c2;
	cout << c1.getCount << endl;
	cout << c1.count << endl;
}