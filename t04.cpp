#include <iostream>
using namespace std;	//���Ŀ��� ����(��������ڸ�������)

class MyArray {
	int size;
	int* data;

	MyArray(int size) {
		this->size = size;
		data = new int[size];
	}
	~MyArray() {
		if (data != NULL)delete[]this->data;
	}
};

int main() {
	MyArray b(10);
	b.data[10] = 1;
	{
		MyArray c = b;
	}
	b.data[10] = 2;
}