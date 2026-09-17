#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setid(){
        salary=122;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }
    void getid(){
        cout<<"The id of the employee is "<<id<<endl;
    }

};
int main(){
    employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setid();
        fb[i].getid();
    }

}