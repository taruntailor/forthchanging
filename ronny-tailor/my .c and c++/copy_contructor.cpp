#include<iostream>
using namespace std;
class demo{
	private:
		int a;
		public:
			demo(int x)
			{
				a=x;
			}
			void display(){
				cout<<"a is "<<a<<endl;
			}
			

};
	int main(){
		demo obj(10);
		obj.display();
		demo obj1(obj);
		obj1.display();
	}