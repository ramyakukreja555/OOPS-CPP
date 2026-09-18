#include<iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking";
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Meowing";
    }
};
int main(){
    Dog d;
    d.eat();
    d.bark();
    Cat c;
    c.eat();
    c.meow();


}