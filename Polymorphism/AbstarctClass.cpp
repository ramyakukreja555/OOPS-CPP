#include<iostream>
using namespace std;
class base{
    public:
    virtual void show()=0;
};
class derived:public base{
  public:
  void show(){
    cout<<"implementation of virtual functions in derived class";
  }
};
int main(){
// base b(compile time error)
base*b;
derived d;
b=&d;
b->show();
return 0;
}