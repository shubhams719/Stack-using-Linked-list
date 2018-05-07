#include<iostream>
#include "link.h"

int main()
{
	link link1;
	link1.push(5);
	link1.push(2);
	link1.push(3);
	link1.pop(2);
	link1.print();
	return 0;
}
