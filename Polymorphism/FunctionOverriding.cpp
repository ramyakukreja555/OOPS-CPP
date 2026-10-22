#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal sound";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks";
    }
};
int main(){
    Dog d;
    d.sound();
    d.Animal::sound();
}