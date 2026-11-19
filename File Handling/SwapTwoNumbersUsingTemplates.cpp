#include<iostream>
using namespace std;
template <class T>
T swaptwovalues(T &a , T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10, y=2;
    swaptwovalues(x,y);
    cout<<x<<" "<<y;
    return 0;
}
