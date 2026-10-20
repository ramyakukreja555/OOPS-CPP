#include<iostream>
using namespace std;
class Number{
 public:
 int x;
 Number(int a){
    x=a;
 }
 operator int(){
    return x;
 }
};
int main(){
 Number n(10);
 int a=n;
 cout<<a;
 return 0;
}