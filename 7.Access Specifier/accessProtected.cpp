#include <iostream>



class Base {
protected:
    int protectedData;

public:
    Base() : protectedData(0) {}

    void setProtectedData(int value) {
        protectedData = value;
    }
    int getProtectedData(){
        return protectedData;
    }
};

class Derived : public Base {
public:
    void modifyBaseData() {
        protectedData = 42;  // Accessible because it's protected
    }
};

int main() {
    Base baseObj;
    // baseObj.protectedData = 10;  // Error: 'int Base::protectedData' is protected within this context

    Derived derivedObj;
    derivedObj.setProtectedData(20);  // Accessible through a public member function
    std::cout<<derivedObj.getProtectedData()<<std::endl;
    return 0;
}