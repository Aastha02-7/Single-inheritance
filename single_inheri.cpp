#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	int a,b;
	public:
		void setab(int x,int y)
		{
			a=x;
			b=y;
		}
		void showab()
		{
			cout<<"a= "<<a<<" b= "<<b<<endl;
		}
};
class derived:public base
{
	int c;
	public:
		void setc(int z)
		{
			c=z;
		}
		void showc()
		{
			cout<<"c= "<<c<<endl;
		}
};
int main()
{
	derived a;
	a.setab(10,5);
	a.setc(6);
	a.showab();
	a.showc();
	return 0;
}
