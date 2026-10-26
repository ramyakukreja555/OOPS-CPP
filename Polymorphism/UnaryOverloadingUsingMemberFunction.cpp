#include<iostream>
using namespace std;
class Distance{
 private:
 int feet;
 int inches;
 public:
 Distance():feet(0),inches(0){};
 Distance(int f,int i):feet(f),inches(i){};
 void displayDistance(){
    cout<<"Feet:"<<feet<<"Inches:"<<inches<<endl;
 }
 Distance operator-(){
    feet=-feet;
    inches=-inches;
    return Distance(feet,inches);
 }

};
int main(){
    Distance D1(11,10),D2(-5,11);
    cout<<"Before Overloading";
    D1.displayDistance();
    -D1;
    cout<<"After Overloading";
    D1.displayDistance();
    cout<<"Before Overloading";
    D2.displayDistance();
    -D2;
    cout<<"After Overloading";
    D2.displayDistance();
    return 0;


}