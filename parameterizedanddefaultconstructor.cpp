#include<iostream>
using namespace std;

    
class complexnumber{
    int a,b;
      public:
      // creating a constructor
      //constructor is a special member function with same name as of the class
      //it is used to initialize the objects of its class
      // it is automatically invoked whenever an object is created
      
      complexnumber(int ,int ); // constructor declaration
      void printdata(){
        cout<<"your number is"<<a<<" "<<"+"<<" "<<b<<"i"<<endl;
      }

      

};
complexnumber::complexnumber(int x,int y){ // it is a parameterized condtructor as it takes 2 parameter
        a=x;
        b=y;
}
int main(){
    // implicit call
    complexnumber a(4,6);
    // explicit call
    complexnumber b= complexnumber(5,7);
    a.printdata();
    b.printdata();
    
}
