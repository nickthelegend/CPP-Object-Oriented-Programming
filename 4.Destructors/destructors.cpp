#include <iostream>



class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called." << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called." << std::endl;
    }
};

int main() {
    MyClass obj; // Constructor called
    // obj goes out of scope here, Destructor called

    return 0;
}
