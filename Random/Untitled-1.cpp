#include <iostream>

class Base {
protected:
    int i;

public:
    void printNum() {
        std::cout << "Value of i: " << i << std::endl;
    }
};

class Subclass : public Base {
private:
    int j;

public:
    void printNum() {
        std::cout << "Value of i: " << i << std::endl;
        std::cout << "Value of j: " << j << std::endl;
    }

    void setValues(int iValue, int jValue) {
        i = iValue;
        j = jValue;
    }
};

int main() {
    Subclass obj;
    obj.setValues(5, 10);
    obj.printNum();

    return 0;
}
