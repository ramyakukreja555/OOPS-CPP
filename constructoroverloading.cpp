#include<iostream>
using namespace std;
class complexnumber{
      int a,b;
      public:
      complexnumber(){ // default constructor
          a=0;
          b=0;
      }
      complexnumber(int x,int y){ // parameterised constructor
            a=x;
            b=y;
      }
      complexnumber(int x){// parameterised constructor
        a=x;
        b=0;
      }
      void printdata(){
        cout<<"your number is"<<a<<" "<<"+"<<" "<<b<<"i"<<endl;
      }


};
int main(){
    complexnumber c1(4,6);
    c1.printdata();
    complexnumber c2(5);
    c2.printdata();
    complexnumber c3;
    c3.printdata();
    return 0;

}