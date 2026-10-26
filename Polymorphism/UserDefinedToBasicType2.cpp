#include<iostream>
using namespace std; 
class Distance{
private:
int feet;
int inches;
public:
Distance(int f,int i):feet(f),inches(i){};
operator int(){
    return feet+static_cast<int>(inches/12);
}
operator float(){
    float totalfeet=feet+(inches/12);
    return totalfeet/3.281;
}
void display (){
    cout<<feet<<" "<<inches<<endl;
}
};
int main(){
Distance d(10,6);
int totalfeet=d;
cout<<totalfeet<<endl;
float totalmeters=d;
cout<<totalmeters;
}