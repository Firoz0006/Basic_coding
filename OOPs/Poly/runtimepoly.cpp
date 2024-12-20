#include <iostream>
using namespace std;
//runtime polymorphism also known as function overriding
class Animal {
public:
   void makeSound()
    {
        cout << "The animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
   void makeSound()
    {
        cout << "The dog barks" << endl;
    }
};

int main()
 {
   // create an Animal object and call its makeSound() function
   Animal *animal1 = new Animal();
   animal1->makeSound();    
   // create a Dog object and call its makeSound() function
   Animal *animal2 = new Dog();
   animal2->makeSound(); 
   Dog* dog = new Dog();
   dog->makeSound();
   // free memory allocated for objects
   delete animal1;
   delete animal2;
   delete dog;

   return 0;
}