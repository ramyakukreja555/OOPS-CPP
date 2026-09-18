// single inheritance
// dog inherits from animal
#include<iostream>
using namespace std;
class Animal{
   public:
   void eat(){
       cout<<"animal eats"<<endl;
   }
};
class Dog:public Animal{
   public:
   void bark(){
    cout<<"dog barks"<<endl;
   }
};
int main(){
    Dog d;
    d.eat(); // inherited
    d.bark(); // it's own
    return 0;

}