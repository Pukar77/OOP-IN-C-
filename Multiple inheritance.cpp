// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class pukar{
    public:
  void display(){
      cout<<"Hello, I am back again"<<endl;
  }  
};
class rimal: public pukar{
    public:
    void display1(){
        cout<<"Hello, Its me coder"<<endl;
    }
};
class book:public rimal{
    public:
    void display2(){
        cout<<"Hello, Its me graphic designer"<<endl;
    }
};
int main() {
    book b;
    b.display();
    b.display1();
    b.display2();
 

    return 0;
}