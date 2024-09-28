#include<iostream>
using namespace std;
Class base {
public:
virtual void print(){count<<"print base class\n";}
void show() {cout<<"show base class\n";}

};
Class derived : public base {
public:
void print(){cout<<"print derived class\n";}
void show(){cout<<"show derived class\n":}

};
int main()
{
	base*bptr;
	derived d;
	bptr = &d;
	
	bptr->print();
	bptr->show();
	
	return0;
}
