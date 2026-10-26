#include<iostream>
using namespace std;
class Distance{
private:
int feet;
float inches;
public:
Distance(int f,float i):feet(f),inches(i){};
int getfeet(){
    return feet;
}
float getinches(){
    return inches;
}
};
class MetricDistance{
private:
float meters;
public:
MetricDistance(Distance d){
    meters=(d.getfeet()+d.getinches()/12)/3.281;
}
void display(){
    cout<<meters;
}
};
int main(){
    Distance d(10,6);
    MetricDistance md=d;
    md.display();
    return 0;


}