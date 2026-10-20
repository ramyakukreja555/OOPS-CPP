#include<iostream>
using namespace std;
class Number{
   public:
   int x;
   Number(int a){
    x=a;
   }
   friend Number operator+(Number a,Number b);
};
Number operator+(Number a,Number b){
    Number temp(0);
    temp.x=a.x+b.x;
    return temp;
}
int main(){
   Number n1(10);
   Number n2(20);
   Number n3=n1+n2;
   cout<<n3.x;
   return 0;
}