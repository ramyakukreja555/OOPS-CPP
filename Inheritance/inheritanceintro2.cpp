#include<iostream>
using namespace std;
class Person{
        public:
        string name;
        void display(){
            cout<<"Name:"<<name<<endl;
        }
    };
    class Student:public Person{
        public:
          int rollno;
          void displayrollno(){
             cout<<"roll no.:"<< rollno<<endl;
          }

    };
int main(){
    Student s;
    s.name="rahul";
    s.rollno=28;
    s.display();
    s.displayrollno();
    return 0;

    
}