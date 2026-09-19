#include<iostream>
using namespace std;
class Shape{
    protected:
    int width;
    int height;
    public:
    void setwidth(int w){
          width=w;
    }
    void setheight(int h){
        height=h;
    }


};
class Rectange:public Shape{
    public:
    int getarea(){
        return (width*height);
    }
};
int main(){
    Rectange r;
    r.setwidth(4);
    r.setheight(5);
    r.getarea();
}