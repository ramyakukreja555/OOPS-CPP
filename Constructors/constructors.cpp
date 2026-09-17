#include<iostream>
using namespace std;
class complexnumber{
    int a,b;
      public:
      // creating a constructor
      //constructor is a special member function with same name as of the class
      //it is used to initialize the objects of its class
      // it is automatically invoked whenever an object is created
      
      complexnumber(); // constructor declaration
      void printdata(){
        cout<<"your number is"<<a<<" "<<"+"<<" "<<b<<"i"<<endl;
      }

      

};
complexnumber::complexnumber(){ // it is a default condtructor as it takes no parameter
        a=10;
        b=0;
}
int main(){
    complexnumber c;
    c.printdata();
    
}
//properties of constructor

//1. it should be declared in the public section of the class 
//2.they are automatically invoked whenever object is created
//3.they cannot return values and do not have return types
//4. it can have default arguments
//5.we cannot refer to thei address


