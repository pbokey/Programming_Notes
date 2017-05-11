#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
// C++ supports multiple inheritance

class Animal {
    public:
        void getFamily() {
            cout << "We are animals!" << endl;
        }
        // what a virtual method is doing is that it is telling the compiler that this method may be overriden in classes that inherit this class
        // so the compiler needs to check all inheritance levels to make sure that this method is overriden or not
        virtual void getClass() {
            cout << "I am an Animal \n";
        }
};

class Dog : public Animal {
    public:
        void getClass() {
            cout << "I am a Dog \n";
        }
};

void whatClassAreYou(Animal *animal) {
    animal -> getClass();
}
int main() {
    Animal *animal = new Animal;
    Dog *dog = new Dog;

    animal -> getClass();
    dog -> getClass();
    // without virtual on the animal.getClass method it prints "I am a animal", and then "I am a dog"

    whatClassAreYou(animal);
    whatClassAreYou(dog);
    //without virtual method this prints "I am an animal for both classes"

    // The base class can also called derived class methods as long as they exist in the base class
    // This is like dynamic binding in Java
    Dog spot;

    Animal* ptrDog = &spot; // this is a pointer to the reference of the dog
    ptrDog -> getFamily();
    ptrDog -> getClass();
}