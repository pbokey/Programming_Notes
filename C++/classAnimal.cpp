#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Animal {
    // protected also available
    private:
        int height;
        int weight;
        string name;
        static int num_of_animals;

    public:
        int getHeight() { return this -> height; }
        int getWeight() { return this -> weight; }
        string getName() { return this -> name; }
        void setHeight(int h) {
            if (h >= 500) {
                this -> height = 500;
            } else {
                this -> height = h;
            }
        }
        void setWeight(int w) {
            this -> weight = w;
        }
        void setName(string n) {
            this -> name = n;
        }
        // these are prototypes
        Animal(int, int, string);
        //Destructor
        ~Animal();
        //Default Constructor
        Animal();
        static int getNumberofAnimals() { return num_of_animals; }
        void toString();
};
// Declare everything
int Animal::num_of_animals = 0;

Animal::Animal(int height, int weight, string name) {
    this -> height = height;
    this -> weight = weight;
    this -> name = name;
    Animal::num_of_animals++;
}
//Desctuctor
Animal::~Animal() {
    cout << "Animal " << this -> name << " destroyed." << endl;
}

Animal::Animal() {
    Animal::num_of_animals++;
}

void Animal::toString() {
    cout << this -> name << " is " << this -> height << " tall, and weighs " << this -> weight << " kgs.\n";
}

//inheritance
class Dog : public Animal {
    private:
        string sound;
    public:
        string getSound() { return this -> sound; }

        Dog(int, int, string, string);
        Dog() : Animal(){}; //overriding the animal default constructor

        void toString();
};
Dog::Dog(int h, int w, string s, string b) : Animal(h, w, s) { //this is saying have the animal constructor handle the
    // first three variables and the last one leave to this constructor
    this -> sound = b;
}
void Dog::toString() {
    cout << this -> getName() << " is " << this -> getHeight() << "cm tall and " << this -> getWeight() << "kgs large and makes "
    << this -> sound << " noise \n";
}

int main() {
    Animal fred;
    fred.setName("Fred");
    fred.setWeight(100);
    fred.setHeight(250);
    cout << fred.getName() << " is " << fred.getHeight() << "cm and " << fred.getWeight() << "kgs." << endl;
    Animal tom(36, 15, "Tom");
    cout << tom.getName() << " is " << tom.getHeight() << "cm and " << tom.getWeight() <<  "kgs." << endl;

    //After the program ends, the garbage collector automatically trashes the object, and the destructor is called

    Dog spot(38, 16, "Spot", "Bark Nigga");
    cout << "Number of Animals: " << Animal::getNumberofAnimals() << endl;
    spot.getSound();
    spot.toString();
    tom.toString();
    spot.Animal::toString(); // 2 colons called the scope operator

    return 0;

}
