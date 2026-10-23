#include<iostream>
using namespace std;
class printData{
 public:
 void print(int i){
    cout<<"printing int:"<<i<<endl;
 }
 void print(double i){
    cout<<"printing double:"<<i<<endl;
 }
 void print(char*c){
    cout<<"printing character:"<<c<<endl;
 }

};
int main(){
printData pd;
pd.print(5);
pd.print(500.263);
pd.print("Hello C++");
return 0;
}