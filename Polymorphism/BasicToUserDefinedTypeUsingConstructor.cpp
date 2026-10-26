#include<iostream>
using namespace std;
class Distance{
    private:
    int feet;
    int inches;
    public:
    Distance(int meters){
        feet=meters*3.281;
        inches=(meters*3.281-feet)*12;
    }
    void display(){
        cout<<feet<<" "<<inches<<endl;
    }
};
int main(){
Distance d=5;
d.display();
return 0;
}