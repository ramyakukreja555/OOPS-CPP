#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    Complex():real(0),img(0){};
    Complex(int r,int i):real(r),img(i){};
    void showData(){
        cout<<"Number "<<real<<"+"<<"i"<<img<<endl;
    }
    friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex c1,Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main(){
    Complex c1(1,1),c2(2,2);
    c1.showData();
    c2.showData();
    Complex c3;
    c3=c1+c2;
    c3.showData();
    
}