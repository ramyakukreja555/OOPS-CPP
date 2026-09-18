#include<iostream>
using namespace std;
class animal{
    public:
    animal(){
        cout<<"animal construtor"<<endl;
    }
};
class dog:public animal{
    public:
    dog(){
        cout<<"dog constructor"<<endl;
    }
};
int main(){
    dog d;

}