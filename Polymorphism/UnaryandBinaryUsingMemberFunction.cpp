#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    Complex():real(0),img(0){};
    Complex(int r=0,int i=0):real(r),img(i){};
    void showData(){
        cout<<"Number "<<real<<"+"<<"i"<<img<<endl;
    }
    Complex operator+(Complex c){
        Complex temp(0,0);
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    Complex operator-(Complex c){
        Complex temp(0,0);
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
    Complex operator++(){
        ++real;
        ++img;
        return*this;
    }
    Complex operator++(int){
        ++real;
        ++img;
        return*this;
    }
    Complex operator=(Complex c){
        real=c.real;
        img=c.img;
        return *this;
    }
};
int main(){
   Complex c1(1,1),c2(2,2);
   c1.showData();
    c2.showData();
    Complex c3(0,0);
    c3=c1+c2;
    cout<<"Addition";
    c3.showData();
    c3=c1-c2;
    cout<<"Subtraction";
    c3.showData();
    c3=++c1;
    cout<<"Preincrement";
    c3.showData();
    c3=c1++;
    cout<<"Postincrement";
    c3.showData();
    c3=c1=c2;
    cout<<"Assignment";
    c3.showData();
    return 0;





}