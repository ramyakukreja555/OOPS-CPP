#include<iostream>
#include<string>
using namespace std;
   class member{
    char gender[10];
    int age;
    public:
    void get(){
        cout<<"age:";
        cin>>age;
        cout<<"gender";
        cin>>gender;

    }
    void display(){
        cout<<age<<" "<<gender<<" "<<endl;

    }
   };
   class stud:public member{
    char level[20];
    public:
    void getdata(){
        member::get();
        cout<<"class";
        cin>>level;
    }
    void display2(){
        member::display();
        cout<<"level:"<<level<<endl;

    }
   };
   class staff:public member{
          float salary;
          public:
          void getdata(){
            member::get();
            cout<<"salary: Rs";
            cin>>salary;
          }
          void display3(){
             member::display();
             cout<<"salary:"<<salary<<endl;
             
          }
   };

int main(){
    member M;
    staff S;
    stud s;
    s.getdata();
    s.display2();
    S.getdata();
    S.display3();
    return 0;


}