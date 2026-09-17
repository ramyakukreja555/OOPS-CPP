#include<iostream>
using namespace std;

// destructor free the emory taken by constructor
// destructor never takes argument nor does it return value
class num{
    static int count;
   public:
   num(){
    count++;
    cout<<"this is the time when constructor is called for object number"<<count;
   }
   ~num(){ // destructor
         cout<<"this is the time when destructor is called for object number"<<count<<endl;
         count--;
   }
};
int num::count;
int main(){
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting thsi block"<<endl;
    }
    cout<<"back to main"<<endl;

    return 0;
}