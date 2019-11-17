#include <iostream>
#include <cstdio>
using namespace std;

struct A
{
	void foo()
	{
		printf("foo");
	}
	virtual void bar()
	{
		printf("bar");
	}
	A()
	{
		bar();
	}
};

struct B :A
{
	void foo()
	{
		printf("b_foo");
	}
	void bar()
	{
		printf("b_bar");
	}
};

int main()
{
	/*int i = 1;
	if (i <= 0)
	{
		printf("****\n");
	}
	else
	{
		printf("%%%%\n");
	}*/
	A * p = new B;
	p->foo();
	p->bar();

	return 0;
}