#include<iostream>
using namespace std;
class Meter{
 public:
 int m;
 Meter(int a){
    m=a;
 }
};
class Centimeter{
  public:
  int cm;
  Centimeter(Meter obj){
    cm=obj.m*100;
  }
};
int main(){
 Meter m1(10);
 Centimeter c1=m1;
 cout<<c1.cm;
 return 0;
}