#include <iostream>
#include <string>
using namespace std;

class Animal {
    int leg;
    int kind;
public:
    void speak() {
        cout << "���" << endl;
    }
};

class Lion : public Animal {
public:
    void speak() {
        cout << "��ȿ�ϴ�" << endl;
    }
};

class Eagle :public Animal {
    int wings;
public:
    void speak() {
        cout << "±±�ϴ�" << endl;
    }
};
