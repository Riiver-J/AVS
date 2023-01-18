#include <iostream>
using namespace std;

class Pointer {
	int* p;

public:
	Pointer(int* p){
		this->p = p;
	}
	~Pointer(){}

	int operator->()const {
		return *p;
	}
	int& operator*() const {
		return *p;
	}
};

int main() {
	Pointer p(new int);
	*p = 100;
	cout << *p << endl;
}