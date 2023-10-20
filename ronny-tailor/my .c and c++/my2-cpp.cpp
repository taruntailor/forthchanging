#include<iostream>
using namespace std;
class demo
{
	private:
		int a,b;
		public:
			demo(int x, int y)
			{
				a=x;
				b=y;
			}
			void display(){
				cout<<a<<b<<endl;
			}
};
int main(){
	demo obj(10,20);
	obj.display();
}