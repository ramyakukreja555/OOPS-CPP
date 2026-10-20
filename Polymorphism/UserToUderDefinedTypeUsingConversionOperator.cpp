#include<iostream>
using namespace std;
class Centimeter {
     public:
      int cm; 
    };
    class Meter { 
        public:
         int m;
          Meter(int a) { 
            m = a; 
        }
        operator Centimeter(){
          Centimeter temp;
          temp.cm=m*100;
          return temp;
        }
    };
int main(){
 Meter m1(10);
 Centimeter c1=m1;
 cout<<c1.cm;
 return 0;
}