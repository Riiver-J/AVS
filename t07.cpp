#include <iostream>
using namespace std;

class Base {
private: int x;
protected: int y;
public: int z;
	  Base() {
		  cout << "�θ�ȣ��" << endl;
		  x = 0; y = 0; z = 0;
	  }
	  void showData() {
		  cout << x << ", " << y << ", " << z << endl;
	  }
};

class Sub :public Base{	//sub�� �ڽ�.showData�� �������̵�
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