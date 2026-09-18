#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class Puppy:public Dog{
    public:
    void cry(){
        cout<<"crying"<<endl;
    }
};
int main(){
    Puppy p;
    p.eat();
    p.bark();
    p.cry();
    return 0;
}