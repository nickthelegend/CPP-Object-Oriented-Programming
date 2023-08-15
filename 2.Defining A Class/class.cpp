#include <iostream>

class Person {
public:
    // Member variables
    std::string name;
    int age;

    // Member function (method)
    void introduce() {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }
};




///this code defines a funtion


///to use the class you have to do something



using namespace std;



int main(){

    Person person1;
    Person person2;


    person1.name = "Nick";
    person2.name = "Someone";

    person1.age = 69;
    person2.age = 69;

    person1.introduce();
    person2.introduce();
}