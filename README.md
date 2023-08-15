1. **Constructors** :

Constructors are special member functions that are automatically called when an object is created. They are used to initialize the object's member variables.

```cpp
class Person {
public:
    // Parameterized constructor
    Person(const std::string& n, int a) : name(n), age(a) {}

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

    person1.introduce();
    person2.introduce();

    return 0;
}

```

when an object is constructed the function is called

Person(const std::string& n, int a) : name(n), age(a) {}

name variable takes the matter of n

age variable takes the matter of a

2. **Destructors** :

Destructors are special member functions that are automatically called when an object is destroyed. They are used to clean up resources and perform any necessary cleanup operations.

```cpp
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
```

This is the method of Declaring a constructor and a Destructor

// Constructor
MyClass() {
std::cout << "Constructor called." << std::endl;
}

// Destructor
~MyClass() {
std::cout << "Destructor called." << std::endl;
}

3.**Access Specifiers** :


```cpp

class MyClass {
public:
    int publicVar;

private:
    int privateVar;

protected:
    int protectedVar;
};


```
