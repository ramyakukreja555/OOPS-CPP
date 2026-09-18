#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(int age){
        cout<<"animal age:"<<age<<endl;
    }
};
class dog:public Animal{
    public:
    dog():Animal(5){
        cout<<"dog constructor"<<endl;
    }
};
int main(){
   dog d;
}