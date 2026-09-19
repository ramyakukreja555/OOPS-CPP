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
class Paintcost{
    public:
    int getcost(int area){
         return (area*70);
    } 
};
class Derived:public Shape,public Paintcost{
       public:
       int area(){
        return (width*height);
       }
};
int main(){
    Derived obj;
    obj.setwidth(5);
    obj.setheight(3);
    int area;
    area= obj.area();
    cout<<"cost:"<<obj.getcost(area);
    return 0;
}