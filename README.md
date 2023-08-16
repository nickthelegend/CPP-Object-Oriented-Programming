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

### Inheritance

Inheritance is a powerful mechanism that allows you to create a new class (subclass or derived class) based on an existing class (superclass or base class). The derived class inherits the properties (data members) and behaviors (member functions) of the base class. This promotes code reuse, as you can define common attributes and methods in the base class and extend or specialize them in the derived classes.

There are child classes and parent classes

child class can get the method and Attribute

# Abstract Classs

Abstract classes provide a powerful mechanism for achieving polymorphism, encapsulation, and code organization by defining a common interface that multiple classes can adhere to while allowing for diverse implementations.

see this is helps in making a polymorphism

```cpp
class Shape {
public:
    virtual double area() const {
        return 0.0;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};
```

Polymorphism is a key concept in object-oriented programming (OOP) that allows objects of different classes to be treated as objects of a common superclass. It enables you to write code that can work with objects of various types in a uniform and flexible way. Polymorphism is achieved through the use of inheritance, virtual functions, and class hierarchies.

There are two main types of polymorphism in C++:

1. **Compile-Time Polymorphism (Static Polymorphism)** : This is achieved through function overloading and operator overloading. The appropriate function or operator is determined at compile time based on the number and types of arguments. This type of polymorphism is resolved during compilation.
2. **Run-Time Polymorphism (Dynamic Polymorphism)** : This is achieved using virtual functions and is more closely associated with inheritance and class hierarchies. The specific function to be called is determined at runtime based on the actual object type. This type of polymorphism is resolved during program execution.

Let's focus on run-time polymorphism using virtual functions:

**Virtual Functions** :

A virtual function is a member function declared in a base class with the `virtual` keyword. Derived classes can provide their own implementations of the virtual function, and the appropriate implementation is called based on the actual object type at runtime.

Key points about virtual functions:

* Virtual functions are declared in the base class with the`virtual` keyword.
* They are meant to be overridden (redefined) in derived classes.
* When a virtual function is called using a base class pointer or reference, the implementation of the derived class is invoked.

Example:

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-keyword">class</span> <span class="hljs-title class_">Shape</span> {
<span class="hljs-keyword">public</span>:
    <span class="hljs-function"><span class="hljs-keyword">virtual</span> <span class="hljs-type">void</span> <span class="hljs-title">draw</span><span class="hljs-params">()</span> <span class="hljs-type">const</span> </span>{
        <span class="hljs-comment">// Default implementation</span>
    }
};

<span class="hljs-keyword">class</span> <span class="hljs-title class_">Circle</span> : <span class="hljs-keyword">public</span> Shape {
<span class="hljs-keyword">public</span>:
    <span class="hljs-function"><span class="hljs-type">void</span> <span class="hljs-title">draw</span><span class="hljs-params">()</span> <span class="hljs-type">const</span> <span class="hljs-keyword">override</span> </span>{
        std::cout << <span class="hljs-string">"Drawing a circle."</span> << std::endl;
    }
};

<span class="hljs-keyword">class</span> <span class="hljs-title class_">Rectangle</span> : <span class="hljs-keyword">public</span> Shape {
<span class="hljs-keyword">public</span>:
    <span class="hljs-function"><span class="hljs-type">void</span> <span class="hljs-title">draw</span><span class="hljs-params">()</span> <span class="hljs-type">const</span> <span class="hljs-keyword">override</span> </span>{
        std::cout << <span class="hljs-string">"Drawing a rectangle."</span> << std::endl;
    }
};

<span class="hljs-function"><span class="hljs-type">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span> </span>{
    Shape* shapes[<span class="hljs-number">2</span>];
    shapes[<span class="hljs-number">0</span>] = <span class="hljs-keyword">new</span> <span class="hljs-built_in">Circle</span>();
    shapes[<span class="hljs-number">1</span>] = <span class="hljs-keyword">new</span> <span class="hljs-built_in">Rectangle</span>();

    <span class="hljs-keyword">for</span> (<span class="hljs-type">int</span> i = <span class="hljs-number">0</span>; i < <span class="hljs-number">2</span>; ++i) {
        shapes[i]-><span class="hljs-built_in">draw</span>();  <span class="hljs-comment">// Calls the appropriate implementation</span>
        <span class="hljs-keyword">delete</span> shapes[i];
    }

    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}
</code></div></div></pre>

In this example, the `Shape` class defines a virtual function `draw()`, and both `Circle` and `Rectangle` classes override this function. When the `draw()` function is called on objects of the derived classes through a base class pointer, the appropriate overridden implementation is invoked based on the actual object type.

Polymorphism allows you to write more generic and flexible code by working with objects at a higher level of abstraction. It enables you to build software systems that can adapt and extend to new types of objects without significant code changes, making your code more adaptable and maintainable.

Abstract class

```cpp
class Shape {
public:
    virtual double area() const = 0;  // Pure virtual function

    virtual void draw() const {
        // Default implementation
    }
};
```

References and pointers are both important concepts in C++ that allow you to work with memory and data in different ways. They serve similar purposes but have distinct characteristics and use cases. Let's break down each concept and explain their meanings.

**Pointers** :

A pointer is a variable that holds the memory address of another variable. Pointers allow you to indirectly access and manipulate data by referring to its memory location. Here's a brief overview:

* **Declaration** : You declare a pointer by specifying the data type it points to, followed by an asterisk (`*`), and then the pointer's name.
  <pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-type">int</span> *ptr;  <span class="hljs-comment">// Declares a pointer to an integer</span>
  </code></div></div></pre>
* **Initialization** : A pointer needs to be initialized with the memory address it points to. You use the address-of operator (`&`) to get the address of a variable.
  <pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-type">int</span> num = <span class="hljs-number">42</span>;
  <span class="hljs-type">int</span> *ptr = &amp;num;  <span class="hljs-comment">// Pointer ptr now points to the memory address of num</span>
  </code></div></div></pre>
* **Dereferencing** : You can use the pointer dereference operator (`*`) to access the value stored at the memory address pointed to by the pointer.
  <pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-type">int</span> value = *ptr;  <span class="hljs-comment">// Retrieves the value stored at the address pointed to by ptr</span>
  </code></div></div></pre>
* **Dynamic Memory Allocation** : Pointers are commonly used to allocate memory dynamically at runtime using `new` and deallocate it using `delete`.
  <pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-type">int</span> *dynPtr = <span class="hljs-keyword">new</span> <span class="hljs-type">int</span>;  <span class="hljs-comment">// Allocates memory for an integer on the heap</span>
  *dynPtr = <span class="hljs-number">42</span>;  <span class="hljs-comment">// Store value 42 in the memory pointed to by dynPtr</span>
  <span class="hljs-keyword">delete</span> dynPtr;  <span class="hljs-comment">// Deallocate the memory</span>
  </code></div></div></pre>

**References** :

A reference is an alias or an alternative name for an existing variable. References allow you to access and manipulate the original data directly. Here's a brief overview:

* **Declaration** : You declare a reference by specifying the data type it refers to, followed by an ampersand (`&`), and then the reference's name.
  <pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-type">int</span> num = <span class="hljs-number">42</span>;
  <span class="hljs-type">int</span> &amp;ref = num;  <span class="hljs-comment">// Declares a reference to an integer that refers to num</span>
  </code></div></div></pre>
* **Initialization** : A reference must be initialized when declared, and once initialized, it cannot be made to refer to another variable.
* **No Dereferencing** : Unlike pointers, you don't need to use an operator to access the value referred to by a reference. You directly use the reference variable itself.
  <pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-type">int</span> value = ref;  <span class="hljs-comment">// Retrieves the value referred to by ref (same as num)</span>
  </code></div></div></pre>
* **Cannot Be NULL** : References must always refer to valid objects and cannot be uninitialized or NULL.

