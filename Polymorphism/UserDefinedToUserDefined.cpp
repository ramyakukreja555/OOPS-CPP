#include<iostream>
using namespace std;
class Time{
private:
int hrs;
int min;
public:
Time(int h=0,int m=0):hrs(h),min(m){};
int getminutes(){
    int tot_min=(hrs*60)+min;
    return tot_min;
}
void display(){
    cout<<hrs<<" "<<min<<endl;
}
};
class Minutes{
private:
int min;
public:
Minutes():min(0){};
void operator=(Time t){
    min=t.getminutes();
}
void display(){
    cout<<min;
}
};
int main(){
Time t1(2,30);
t1.display();
Minutes m1;
m1.display();
m1=t1;
t1.display();
m1.display();
return 0;
}
// If you put the conversion function inside Time, you can write:

// C++

// class Time {
// private:
//     int hrs, min;

// public:
//     Time(int h = 0, int m = 0) : hrs(h), min(m) {}

//     int getMinutes() {
//         return hrs * 60 + min;
//     }

//     operator int() {
//         return getMinutes();
//     }
// };