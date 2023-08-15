#include <iostream>


class Person {
public:
    // Parameterized constructor
    Person(const std::string& n, int a) : name(n), age(a) {} /////this is like a funtion





    void introduce() {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    // Creating objects using the constructor
    Person person1("David", 28);
    Person person2("Eve", 22);

    // a constructor is called when a object is initialised


    




    person1.introduce();
    person2.introduce();

    return 0;
}
