#include <iostream>
#include <string>
using namespace std;

class Animal {
    int leg;
    int kind;
public:
    void speak() {
        cout << "¿ï´Ù" << endl;
    }
};

class Lion : public Animal {
public:
    void speak() {
        cout << "Æ÷È¿ÇÏ´Ù" << endl;
    }
};

class Eagle :public Animal {
    int wings;
public:
    void speak() {
        cout << "Â±Â±ÇÏ´Ù" << endl;
    }
};
