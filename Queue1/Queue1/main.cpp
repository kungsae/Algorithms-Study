////20316정의재
//#include<iostream>
//
//using namespace std;
//#define NEXT(index,QSIZE) ((index+1)%QSIZE)
//
//typedef struct Queue
//{
//	int* buf;
//	int qsize;
//	int front;
//	int rear;
//	int count;
//}Queue;
//
//void InitQueue(Queue* queue, int qsize);
//int IsFull(Queue* queue);
//int IsEmpty(Queue* queue);
//void Enqueue(Queue* queue,int data);
//int Dequeue(Queue* queue);
//int main()
//{
//	int i;
//	Queue queue;
//	InitQueue(&queue, 10);
//	for (i = 0; i <= 5; i++)
//	{
//		cout << i << "입력" << endl;
//		Enqueue(&queue, i);
//	}
//	cout << endl;
//	while (!IsEmpty(&queue))
//	{
//		cout << Dequeue(&queue) <<" 출력" <<endl;
//
//	}
//	cout << endl;
//	return(0);
//}
//
//void InitQueue(Queue* queue, int qsize)
//{
//	queue->buf = new int[qsize];
//	queue->qsize = qsize;
//	queue->front = queue->rear = 0;
//	queue->count = 0;
//}
//int IsFull(Queue* queue)
//{
//	return queue->count == queue->qsize;
//}
//int IsEmpty(Queue* queue)
//{
//	return queue->count == 0;
//}
//void Enqueue(Queue* queue,int data)
//{
//	if (IsFull(queue))
//	{
//		cout << "큐가 꽉참" << endl;
//		return;
//	}
//	queue->buf[queue->rear] = data;
//	queue->rear = NEXT(queue->rear, queue->qsize);
//	queue->count++;
//}
//int Dequeue(Queue* queue)
//{
//	int re = 0;
//	if (IsEmpty(queue))
//	{
//		cout << "큐 없음" << endl;
//		return re;
//	}
//	re = queue->buf[queue->front];
//	queue->front = NEXT(queue->front, queue->qsize);
//	queue->count--;
//	return re;
//}

////20316정의재
//#include<iostream>
//
//using namespace std;
//#define QUEUE_SIZE 5
//#define NEXT(index) ((index+1)%QUEUE_SIZE)
//
//typedef struct Queue
//{
//	int buf[QUEUE_SIZE];
//	int front;
//	int rear;
//}Queue;
//
//void InitQueue(Queue* queue);
//int IsFull(Queue* queue);
//int IsEmpty(Queue* queue);
//void Enqueue(Queue* queue, int data);
//int Dequeue(Queue* queue);
//int main()
//{
//	int select = -1;
//	Queue queue;
//	InitQueue(&queue);
//
//	while (true)
//	{
//		cout << "1.삽입    2.삭제" << endl;
//		cout << ">>";
//		cin >> select;
//
//		switch (select)
//		{
//		case 1:
//			int value;
//			cout << "input data : ";
//			cin >> value;
//			Enqueue(&queue, value);
//			break;
//		case 2 :
//			Dequeue(&queue);
//			break;
//		}
//		cout << endl;
//	}
//	return(0);
//}
//
//void InitQueue(Queue* queue)
//{
//	queue->front = queue->rear = 0;
//}
//int IsFull(Queue* queue)
//{
//	return NEXT(queue->rear) == queue->front;
//}
//int IsEmpty(Queue* queue)
//{
//	return queue->front == queue->rear;
//}
//void Enqueue(Queue* queue, int data)
//{
//	if (IsFull(queue))
//	{
//		cout << "큐가 꽉참" << endl;
//		return;
//	}
//	queue->buf[queue->rear] = data;
//	queue->rear = NEXT(queue->rear);
//}
//int Dequeue(Queue* queue)
//{
//	int re = 0;
//	if (IsEmpty(queue))
//	{
//		cout << "큐 없음" << endl;
//		return re;
//	}
//	re = queue->buf[queue->front];
//	queue->front = NEXT(queue->front, queue->qsize);
//	cout << "dequeue : " << re;
//	return re;
//}

//20316정의재
#include<iostream>

using namespace std;
#define NEXT(index,QSIZE) ((index+1)%QSIZE)

typedef struct Queue
{
	int* buf;
	int qsize;
	int front;
	int rear;
	int count;
}Queue;

void InitQueue(Queue* queue,int qsize);
int IsFull(Queue* queue);
int IsEmpty(Queue* queue);
void Enqueue(Queue* queue, int data);
int Dequeue(Queue* queue);
int main()
{
	int i, size;
	int select = -1;

	Queue queue;

	cout << "큐의 크기 입력 : ";
	cin >> size;
	InitQueue(&queue, size);
	while (true)
	{
		cout << "1.삽입    2.식제" << endl;
		cout << ">> ";
		cin >> select;
		switch (select)
		{
		case 1 :
			int value;
			cout << "input data : ";
			cin >> value;
			Enqueue(&queue, value);
			break;
		case 2:
			Dequeue(&queue);
			break;
		}
		cout << endl;
	}

	return(0);
}

void InitQueue(Queue* queue,int qsize)
{
	queue->buf = new int[qsize];
	queue->qsize = qsize;
	queue->front = queue->rear = 0;
	queue->count = 0;

}
int IsFull(Queue* queue)
{
	return queue->count == queue->qsize;
}
int IsEmpty(Queue* queue)
{
	return queue->count == 0;
}
void Enqueue(Queue* queue, int data)
{
	if (IsFull(queue))
	{
		cout << "큐가 꽉참" << endl;
		return;
	}
	queue->buf[queue->rear] = data;
	queue->rear = NEXT(queue->rear,queue->qsize);
	queue->count++;
}
int Dequeue(Queue* queue)
{
	int re = 0;
	if (IsEmpty(queue))
	{
		cout << "큐 없음" << endl;
		return re;
	}
	re = queue->buf[queue->front];
	queue->front = NEXT(queue->front, queue->qsize);
	cout << "dequeue : " << re;
	queue->count--;
	return re;
}