#include <iostream>
using namespace std;
//types of runtime poly...
class Animal {
public:
   virtual void makeSound()
    {
      cout << "The animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
   void makeSound() override
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
   // free memory allocated for objects
   delete animal1;
   delete animal2;

   return 0;
}