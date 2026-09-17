#include<iostream>
using namespace std;
class complexnumber{
     int a,b;
     public:
     void setnumber(int n1,int n2){
        a=n1;
        b=n2;
     }
     void printnumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
     }
     friend complexnumber sumcomplex(complexnumber o1,complexnumber o2);
};
complexnumber sumcomplex(complexnumber o1,complexnumber o2){
    complexnumber o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complexnumber c1,c2,sum;
    c1.setnumber(1,4);
    c1.printnumber();
    c2.setnumber(5,8);
    c2.printnumber();
    sum= sumcomplex(c1,c2);
    sum.printnumber();
}
// properties of friend functions
//1. not in the scope of class
//2.since it is not in the scope of class,it cannot be called from the
// object of that class so c1.sumcomplex()==invalid
// 3. usually contains objects as arguments
// 4. can be declared inside public or private section of the class
//5. it cannot access the memebers directly by their names and need objects_name.
//member_name to access any member
