#include<iostream>
using namespace std;
// forward declaration
class complexnumber;

class calculator{
        public:
        int add(int a,int b){
            return a+b;
        }
        int sumrealcomplex(complexnumber o1,complexnumber o2);
};
class complexnumber{
     int a,b;
     // individually declaring functions as friends
     friend int calculator:: sumrealcomplex(complexnumber o1,complexnumber o2);
     
     
     public:
     void setnumber(int n1,int n2){
        a=n1;
        b=n2;
     }
     void printnumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
     }
     
};
int calculator::sumrealcomplex(complexnumber o1,complexnumber o2){

            return (o1.a+o2.a);
        }


int main(){
     complexnumber c1, c2;

    c1.setnumber(2, 3);
    c2.setnumber(4, 5);

    calculator c;

    cout << c.sumrealcomplex(c1, c2);

    
    return 0;
}

