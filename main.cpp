#include<iostream>
#include "link.h"

int main()
{
	link stack;
	stack.push(5);
	stack.push(2);
	stack.push(3);
	stack.pop(2);
	stack.print();
	return 0;
}
