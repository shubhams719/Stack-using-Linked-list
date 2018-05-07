struct node
{
	int data;
	node* next;
};

class link
{
	node* head;
	
	public:
	link();
	void push(int data);
	void pop(int data);
	void print();
};

