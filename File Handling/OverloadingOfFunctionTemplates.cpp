#include<iostream>
using namespace std;
template< class T>
void display(T a){
    cout<<a<<endl;
}
template<class T>
void display( T a ,T b){
    cout<<a<<" "<<b;
}
int main(){
  display(10);
  display(10,20);
  return 0;
}