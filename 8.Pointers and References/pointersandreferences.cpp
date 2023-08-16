#include <iostream>


using namespace std;

int main() {



    // int *ptr;  // Declares a pointer to an integer
    int num = 42; //This is a Varaible
    
    int *ptr = &num;  // Pointer ptr now points to the memory address of num 
    
    int value = *ptr;  // Retrieves the value stored at the address pointed to by ptr //Dereferencing the pointer will sotre the value of num to value variable

    //&num shows the memory adress of num

    cout<<value<<endl;


    ////Refereneces

    // int num = 42;
    int &ref = num;  // ref is now an alias for num

    std::cout << "num: " << num << std::endl;  // Output: num: 42
    std::cout << "ref: " << ref << std::endl;  // Output: ref: 42
}