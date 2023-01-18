#include <iostream>
using namespace std;

class Base {
private: int x;
protected: int y;
public: int z;
	  Base() {
		  cout << "부모호출" << endl;
		  x = 0; y = 0; z = 0;
	  }
	  void showData() {
		  cout << x << ", " << y << ", " << z << endl;
	  }
};

class Sub :public Base{	//sub가 자식.showData를 오버라이드
	int i;
	Sub(){}
public:
	void showData() {
		cout << i << endl;
	}

};

int main() {
	Base b;
	Sub s();
	b.showData();
	b.z = 10;
	b.showData();

}