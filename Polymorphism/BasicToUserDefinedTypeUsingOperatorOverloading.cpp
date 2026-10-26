#include<iostream>
using namespace std;
class Distance{
  private:
  int feet;
  float inches;
  public:
  Distance(int f=0,float i=0):feet(f),inches(i){};
  Distance& operator=(int meters){
    feet = meters * 3.281; 
    inches = (meters * 3.281 - feet) * 12;
    return *this;
  }
  void display()const{
    cout<<feet<<" "<<inches<<endl;
  }
};
int main(){
Distance d(0,0);
int meters=5;
d= meters;
d.display();
return 0;
}