#include <iostream>
using namespace std;

// BASE CLASS
class Animal {
public:
    // Adding virtual enables dynamic binding.
    virtual void speak() {
        cout << "Animal makes a generic sound." << endl;
    }

    virtual ~Animal() {}
};

// DERIVED CLASS
class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    cout << "--- With Virtual Keyword ---" << endl;

    Animal* myPet = new Dog();

    myPet->speak();

    delete myPet;

    return 0;
}
