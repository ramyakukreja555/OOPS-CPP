#include<iostream>
// static variabe by default initializes with zero
using namespace std;
class Employee{
    int id;
    static int count;
    public:
    void setdata(){
        cout<<"Enter the id: "<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"The id of the employee is: "<<id<<"and the employee number is:"<<count;

    }
    static void getcount(){
        cout<<"The value of count is:"<<endl;
    }

};
int Employee::count;
int main(){
    Employee harry,rohan,lavish;
    // count is the static data member of the employee
    harry.setdata();
    harry.getdata();
    Employee ::getcount();
    rohan.setdata();
    rohan.getdata();
     Employee ::getcount();
     lavish.setdata();
    lavish.getdata();
     Employee ::getcount();




}