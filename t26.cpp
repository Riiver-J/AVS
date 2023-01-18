#include <iostream>
#include <windows.h>
using namespace std;

class Rect {
protected:
	int x, y, width, height;
public:
	Rect(int x, int w,int y, int h) {
		this->x = x;
		this->y = y;
		width = w;
		height = h;
	}
	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Rectangle(hdc,x,y, x + width, y + height);
	}
};

class ColoredRect :public Rect {
	int red, green, blue;
public:
	ColoredRect(int x, int y, int w, int h, int r, int g, int b) :
		Rect(x,y,w,h){
		red = r;
		green = g;
		blue = b;
	}
	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow());
		SelectObject(hdc, GetStockObject(DC_BRUSH));
		SetDCBrushColor(hdc, RGB(red, green, blue));
		Rectangle(hdc, x, y, x + width, y + height);
	}
};

int main() {
	Rect r1(100, 100, 80, 80);
	ColoredRect r2(200, 200, 80, 80,255,255,0);
	ColoredRect r3(300, 200, 80, 80, 255, 0, 255);

	r1.draw();
	r2.draw();
	r3.draw();
}