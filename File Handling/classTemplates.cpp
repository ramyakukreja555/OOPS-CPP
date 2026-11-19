#include<iostream>
using namespace std;
template<class T>
class Box{
    T value;
    public:
    Box(T a){
        value=a;
    }
    void display(){
        cout<<value<<endl;
    }
};
int main(){
    Box <int>b1(10);
    Box<float> b2(10.5);
    Box<char>b3('A');
    b1.display();
    b2.display();
    b3.display();
    return 0;
}