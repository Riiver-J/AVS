#include <iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data;
	MyArray(int size) {
		this->size = size;
		data = new int[size];
	}
	~MyArray() {
		if (this->data == NULL)
			delete[] data;
	}

	MyArray(const MyArray& other) {
		this->size = other.size;
		this->data = new int[size];

		for (int i = 0; i < other.size; i++) {
			this->data[i] = other.data[i];
		}
	}
};

int main() {
	MyArray buffer(10);
	buffer.data[0] = 2;

	MyArray clone = buffer;
	cout << buffer.data[0] << endl;
	cout << clone.data[0] << endl;
	buffer.data[0] = 3;

	cout << buffer.data[0] << endl;
	cout << clone.data[0] << endl;
}