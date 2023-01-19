#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1{ 1,2,3 };

	try {
		while (true) {
			if (v1.size() <= 0) {
				throw string("underflow");
			}
			v1.pop_back();
			cout << v1.size() << endl;
		}
	}
		catch (string e) {
			cout << e << endl;
		}
}