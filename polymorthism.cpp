
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound." << endl;
    }

    virtual ~Animal() = default;
};

// First derived class
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// Second derived class
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    // Base-class pointer
    Animal* animal;

    animal = &dog;
    animal->makeSound();

    animal = &cat;
    animal->makeSound();

    return 0;
}
  