#include<iostream>
using namespace std;
class Number{
  private:
  int x;
  int y;
  int z;
  int r;
  public:
  Number(){
    x=0;
    y=10;
    z=8;
    r=4;
  }
  Number(int first,int second){
    x=first;
    y=second;
    z=8;
    r=4;
  }
  Number(int first,int second,int third,int fourth){
    x=first;
    y=second;
    z=third;
    r=fourth;
  }
  Number(Number &obj){
    x=obj.x;
    y=obj.y;
    z=obj.z;
    r=obj.r;
  }
  void showdata(){
    cout<<x<<" "<<y<<" "<<z<<" "<<r;
  }
};
int main(){
   Number n1;
   Number n2(10,20);
   Number n3(30,40,50,60);
   Number n4(n2);
   Number n5=n1;
   n1.showdata();
   n2.showdata();
   n3.showdata();
   n4.showdata();
   n5.showdata();

}