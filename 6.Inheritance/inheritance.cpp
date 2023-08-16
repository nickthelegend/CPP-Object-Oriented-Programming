#include <iostream>



using namespace std;


class Animal {
public:
    std::string name;
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << name << " is barking." << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.name = "Buddy"; // Accessing inherited attribute
    myDog.bark(); // Output: Buddy is barking.

    return 0;
}





