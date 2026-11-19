#include<iostream>
using namespace std;
template<class T>
T maximum(T a , T b){
    if(a>b) return a;
    else return b;
}
int main(){
 cout<<maximum(10,20)<<endl;
 cout<<maximum(3.5,2.5)<<endl;
 return 0;
}