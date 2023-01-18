#include <iostream>
using namespace std;
class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
};
class Rect {
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height= height;
	}
	friend bool RectManager::equals(Rect r, Rect s);	//������ ���ο���,
};

bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height && s.height)
		return true;
	else return false;
}
/*bool equals(Rect r, Rect s) {	//��������ó�� ���� ��𼭳� ������ �� �� �ְԵ�
	if (r.width == s.width && r.height && s.height)
		return true;
	else return false;
}
*/

int main() {
	Rect r(3, 4), s(5, 6);
	RectManager man;
		if (RectManager::equals(r, s)) cout << "equal" << endl;
		else cout << "not equal" << endl;
}