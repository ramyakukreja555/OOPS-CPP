#include<iostream>
using namespace std;
class Base{
    protected:
    int i;
    public:
    Base(int x){
        i=x;
        cout<<"constructing base";
    }
        ~Base(){
         cout<<"destructing base";
        }
    
};
class derived:public Base{
    int j;
    public:
    derived(int x,int y):Base(y){
        j=x;
        cout<<"constructing derived";
    }
    ~derived(){
        cout<<"destructing derived";
    }
    void show(){
        cout<<i<<" "<<j<<endl;
    }
};
int main(){
    derived obj(3,4);
    obj.show();
    return 0;


}