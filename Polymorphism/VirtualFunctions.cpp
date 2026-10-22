#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
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
int main()
{
    Animal *ptr;
    Dog d;

    ptr = &d;
    ptr->sound();

    return 0;
}