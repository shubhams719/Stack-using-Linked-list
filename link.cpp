#include<iostream>
#include "link.h"
void link::push(int data)
{
	node* temp = new node();
	temp->data = data;
	if(head == NULL)
	{
		head = temp;
		temp->next = NULL;
		return;
	}
	temp->next = head;
	head = temp;
	return;
}

link::link()
	{
		head = NULL;
	}

void link::pop(int data)
{
	node* temp = head->next;
	head->next = NULL;
	head = NULL;
	head = temp;
	return;
}

void link::print()
{	
	node* temp = head;
	while(temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
}





	












