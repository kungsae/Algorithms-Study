//1번문제

//#include<iostream>
//
//using namespace std;
//
//#define SIZE 10
//
//typedef struct
//{
//	char stackArr[SIZE];
//	int topIndex;
//	char name;
//
//}stack;
//
//typedef stack* pstack;
//
//void init(pstack ps, char c);
//void push(pstack ps, char ch);
//char pop(pstack ps);
//
//int main()
//{
//	//cout << "A";
//	stack s1, s2;
//	int i;
//	char a;
//	cin >> a;
//	init(&s1, 'A');
//	init(&s2, 'B');
//	cout << endl;
//	push(&s1, 'd');
//	push(&s1, 'a');
//	push(&s1, 't');
//	push(&s1, 'a');
//
//	push(&s2, 's');
//	push(&s2, 't');
//	push(&s2, 'a');
//	push(&s2, 'c');
//	push(&s2, 'k');
//
//	for (i = 0; i < 5; i++)
//	{
//		cout << "Pop s1 " << pop(&s1) << endl;
//	}
//	cout << endl;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "Pop s2 " << pop(&s2) << endl;
//	}
//	return(0);
//}
//
//void init(pstack ps, char c)
//{
//	ps->topIndex = 0;
//	ps->name = c;
//	cout << ps->name;
//}
//void push(pstack ps, char ch)
//{
//	if (ps->topIndex == SIZE)
//	{
//		cout << "스택이 최대상태" << endl;
//		return;
//	}
//	
//	ps->stackArr[ps->topIndex] = ch;
//	ps->topIndex++;
//}
//char pop(pstack ps)
//{
//	if (ps->topIndex == 0)
//	{
//		cout << "topIndex의 값이 없음";
//		return(0);
//	}
//	ps->topIndex--;
//	return(ps->stackArr[ps->topIndex]);
//}

//3번문제

#include<iostream>

using namespace std;

#define SIZE 10

typedef struct
{
	int stackArr[SIZE];
	int topIndex;
	int name;

}stack;

typedef stack* pstack;

void init(pstack ps, int c);
void push(pstack ps, int ch);
int pop(pstack ps);

int main()
{
	//cout << "A";
	stack s1;
	int i;
	int arr[5];
	init(&s1, 0);
	for (i = 0; i < 5; i++)
	{
		cin >> arr[i];
		push(&s1, arr[i]);
	}
	
	

	for (i = 0; i < 5; i++)
	{
		cout << "Pop s1 " << pop(&s1) << endl;
	}
	cout << endl;
	return(0);
}

void init(pstack ps, int n)
{
	ps->topIndex = 0;
	ps->name = n;
	cout << ps->name<<endl;
}
void push(pstack ps, int num)
{
	if (ps->topIndex == SIZE)
	{
		cout << "스택이 최대상태" << endl;
		return;
	}

	ps->stackArr[ps->topIndex] = num;
	ps->topIndex++;
}
int pop(pstack ps)
{
	if (ps->topIndex == 0)
	{
		cout << "topIndex의 값이 없음";
		return(0);
	}
	ps->topIndex--;
	return(ps->stackArr[ps->topIndex]);
}

