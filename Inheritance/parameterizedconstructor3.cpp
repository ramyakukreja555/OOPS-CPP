#include<iostream>
using namespace std;
class base1{
    protected:
    int i;
    public:
    base1(int x){
        i=x;
        cout<<"constructing base1"<<endl;

    } 
    ~base1(){
        cout<<"destructing base1"<<endl;
    }
};
class base2{
    protected:
    int k;
    public:
    base2(int x){
        k=x;
        cout<<"constructing base2"<<endl;
    }
    ~base2(){
        cout<<"destructing base2"<<endl;
    }
};
class derived:public base1,public base2{
    int j;
    public:
    derived(int x,int y,int z):base1(y),base2(z){
        j=x;
        cout<<"constructing derived"<<endl;
    }
    ~derived(){
        cout<<"destructing derived"<<endl;
    }
    void show(){
        cout<<i<<" "<<j<<" "<<k<<endl;
    }
};
int main(){
    derived obj(2,3,4);
    obj.show();
    return 0;

}