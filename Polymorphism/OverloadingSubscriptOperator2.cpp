#include<iostream>
using namespace std;
class atype{
    int a[3];
    public:
    atype(int i,int j,int k){
        a[0]=i;
        a[1]=j;
        a[2]=k;
    }
    int &operator[](int i){
        return a[i];
    }
};
int main(){
   atype obj(1,2,3);
   cout<<obj[1]<<" ";
   obj[1]=25;
   cout<<obj[1];

   return 0;
}