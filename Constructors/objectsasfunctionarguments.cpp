#include<iostream>
using namespace std;
class complexnumber{
     int a;
     int b;
     public:
     void setdata(int v1,int v2){
        a=v1;
        b=v2;
     }
     void setdatabysum(complexnumber o1,complexnumber o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
     }
     void printnumber(){
        cout<<"your complex number is:"<<a<<"+i"<<b<<endl;
     }
};
int main(){
    complexnumber c1,c2,c3;
    c1.setdata(1,2);
    c1.printnumber();
    c2.setdata(3,4);
    c2.printnumber();
    c3.setdatabysum(c1,c2);
    c3.printnumber();
    return 0;


}