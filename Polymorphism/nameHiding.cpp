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
 void showdata(){
    b=7;
    cout<<"b:"<<b<<endl;
 }
};
int main(){
 Base b;
 b.showdata(5);
 Derived obj;
 obj.showdata();
 //obj.showdata(6); will give error
}