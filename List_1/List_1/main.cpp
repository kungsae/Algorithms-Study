#include<iostream>
using namespace std;

typedef struct linked 
{
	int data;
	struct linked* next;
}node;

node* head = NULL;
node* tail = NULL;

void Init();
void Insert(node* ptr);
void PrintList(node* ptr);
void Modify(node *ptr);
void InsertData(node* ptr);
void Delete(node* ptr);


int main()
{
	int menu = 0;
	Init();
	return(0);
}

void Init()
{
	head = new node;
	head->data = 0;
	head->next = NULL;
	tail = head;
	return;
}
void Insert(node* ptr)
{
	node* newnode = new node;
	int num = 0;

	cout << "input number : ";
	cin >> num;

	newnode->data = num;
	newnode->next = NULL;
	ptr->next = newnode;
	tail = newnode;

	return;
}
void PrintList(node* ptr)
{
	node* view = ptr->next;
	while (view!=NULL)
	{
		cout << view->data;
		view = view->next;
	}
	cout << endl;
	return;
}
void Modify(node* ptr)
{
	int index = 0;
	int num = 0;
	int i;
	cout << "input modify index";
	cin >> index;
	cout << "input modify data";
	cin >> num;
	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}
	ptr->data = num;
	return;

}
void InsertData(node* ptr)
{
	node* newnode = new node;

	int index = 0;
	int num = 0;
	int i;
	cout << "input InsertData index : ";
	cin >> index;
	cout << "input data";
	cin >> num;
	for ( i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}
	newnode->data = num;
	newnode->next = NULL;
	if (ptr->next == NULL)
	{
		ptr->next = newnode;
		tail = newnode;
	}
	return;


}
void Delete(node* ptr)
{
	node* temp;
	int i;
	int index;
	if (head == tail)
	{
		cout << "not found data" << endl;
		return;
	}
	cout << "input delete index : ";
	cin >> index;
	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
	}
	temp = ptr->next;
	if (temp->next == NULL)
	{
		ptr->next = NULL;
		tail = ptr;
	}
	else
	{
		ptr->next = temp->next;
	}
	delete(temp);
	return;
}