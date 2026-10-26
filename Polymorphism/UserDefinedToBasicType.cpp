#include<iostream>
using namespace std;
class Time{
 int hrs;
 int min;
 public:
 Time(int a,int b){
    hrs=a;
    min=b;
 }
 operator int(){
    cout<<"Class type to basic type";
    return (hrs*60+min);
 }
};
int main(){
 Time t(4,6);
//  int duration =t;
 int duration=t.operator int();
 cout<<duration;
}