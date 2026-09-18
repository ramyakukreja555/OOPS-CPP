#include<iostream>
using namespace std;
class Father{
     public:
     void house(){
        cout<<"father's house"<<endl;
     }
};
class Mother{
    public:
   void car(){
    cout<<"mother's car"<<endl;
   }
};
class child:public Father,public Mother{
    public:
     void study(){
        cout<<"child studies"<<endl;
     }
};
int main(){
    child c;
    c.house();
    c.car();
    c.study();

}