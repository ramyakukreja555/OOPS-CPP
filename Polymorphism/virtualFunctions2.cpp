#include<iostream>
using namespace std;
class Shape{
 public:
    virtual void Draw() {
        cout << "I am shape class";
    }
};
class Square : public Shape {
public:
    void Draw() {
        cout << "I am square";
    }
};
class Circle : public Shape {
public:
    void Draw() {
        cout << "I am circle";
    }
};

int main(){
Shape*S1=new Shape();
S1->Draw();
S1=new Square();

S1->Draw();

S1 = new Circle();
S1->Draw();
return 0;
}