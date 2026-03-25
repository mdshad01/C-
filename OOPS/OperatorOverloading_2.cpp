#include<iostream> 
using namespace std; 
class MinusOverload{ 
    private: 
    int a; 
    int b; 
    public: 
    MinusOverload(int i, int j){ 
        a=i; 
        b=j; 
    } 
  void display(){ 
    cout<<"Value of A : "<<a<<endl; 
    cout<<"Value of B : "<<b<<endl; 
  } 
  void operator -(){ 
    a=-a; 
    b=-b; 
  }
  void operator *() {
    a = a * a;
    b = b * b;
  } 
}; 
int main(){ 
  MinusOverload m1(2,5); 
  m1.display();
 -m1; 
  m1.display(); 
 *m1; 
  m1.display(); 
//   m2.display();
//  -m2;
//   m2.display();
  return 0;
}