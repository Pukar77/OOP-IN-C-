#include<iostream>
using namespace std;
class num2;
class num1{
	int x;
	public:
		friend class num2;
		num1(){
		};
		num1(int n1){
			x=n1;
		}
		  void display() {
        cout << "Number1 = " << x << endl;
    }
		friend void swap(num1 &n1, num2 &n2);
		
};

class num2{
	int y;
	public:
		num2(){
		};
		num2(int n2){
			y=n2;
		}
		  void display() {
        cout << "Number2 = " << y << endl;
    }
		friend void swap(num1 &n1, num2 &n2);
};
void swap(num1 &n1, num2 &n2){
	int temp;
	temp=n1.x;
	n1.x=n2.y;
	n2.y=temp;
}
int main(){
	num1 n1(2);
	num2 n2(3);
	
	cout<<"Before swapping number:";
	n1.display();
	n2.display();
	num2 n3;
swap(n1,n2);
	cout<<"After swapping number";
	n1.display();
	n2.display();
	
	return 0;
}
