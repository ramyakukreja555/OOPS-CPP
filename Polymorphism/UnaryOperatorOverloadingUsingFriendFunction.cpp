#include<iostream>
using namespace std;
class Number{
 public:
 int x;
 Number(int a){
    x=a;
 }
 friend void operator++(Number&n);
};
 void operator++(Number&n){
     ++n.x;
  }
int main(){
  Number n(5);
  ++n;
  cout<<n.x;
  return 0;
}