#include<iostream>
using namespace std;
class Number{ 
    public:
     int x;
      Number(int a) { 
        x = a; 
    } 
};
int main(){
 Number n=10;
 cout<<n.x;
 return 0;
}
