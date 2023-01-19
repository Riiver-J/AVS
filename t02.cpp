#include <iostream>
using namespace std;

class Message {
	virtual void send() = 0;
};

class SMS : public Message {
public:
	void send() {
		cout << "content" << endl;
		cout << "number" << endl;
		cout << "file" << endl;
	}
};

class Email : public Message {
public:
	void send() {
		cout << "content" << endl;
		cout << "e-mail address" << endl;
		cout << "Reply address" << endl;
	}
};

int main() {
	SMS s;
	Email m;
}