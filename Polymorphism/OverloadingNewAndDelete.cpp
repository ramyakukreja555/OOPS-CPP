#include<iostream>
#include<new>
#include<cstdlib>
using namespace std;
class Demo{
   public:
   Demo() { 
    cout << "Constructor called\n"; 
}
 ~Demo() { 
    cout << "Destructor called\n";
 }
 void* operator new(size_t size){
     cout<<"Overloaded new called";
     void*ptr=malloc(size);
     if (ptr == nullptr) throw bad_alloc(); 
     return ptr;
 }
 void operator delete(void* ptr) noexcept {
    cout << "Overloaded delete called\n"; 
    free(ptr);
 }

};
int main(){
    Demo*ptr=new Demo;
    delete ptr;
    return 0;
  
}