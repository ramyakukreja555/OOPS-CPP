#include<iostream>
using namespace std;
class Base{
    int a;
    public:
    void showdata(int x){
        a=x;
        cout<<"a:"<<a<<endl;
    }
};
class Derived:public Base{
 int b;
 public:
 using Base::showdata;
 void showdata(){
    b=7;
    cout<<"b:"<<b<<endl;
 }
};
int main(){

 Derived obj;
 obj.showdata();
 obj.showdata(10);
 return 0;

}