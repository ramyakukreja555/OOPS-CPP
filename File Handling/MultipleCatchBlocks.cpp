#include<iostream>
using namespace std;
int main(){
    try{
        int choice=2;
        if(choice==1) throw 10;
        else if(choice==2) throw 3.14;
        else throw 'A';

    }
    catch(int x){
        cout<<"integer exception";
    }
    catch(double x){
        cout<<"double exception";
    }
    catch(char x){
        cout<<"character exception";
    }
    return 0;
}