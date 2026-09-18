#include<iostream>
using namespace std;
class animal{
    public:
    ~animal(){
        cout<<"animal destructor"<<endl;
    }
};
class dog:public animal{
    public:
    ~dog(){
        cout<<"dog destructor"<<endl;
    }
};
int main(){
    dog d;

}