#include<iostream>
using namespace std;
class area{
  public:
  float calculate(int side){
    return side*side;
  }
  float calculate(int length,int breadth){
    return length*breadth;
  }
};
int main(){
    area a;
    cout<<a.calculate(4)<<endl;
    cout<<a.calculate(4,5)<<endl;
}