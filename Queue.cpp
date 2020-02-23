#include "Queue.h"
#include <iostream>
using namespace std;

CQueue::CQueue()
{
	front = 100 - 1;
	rear = 100 - 1;
}
void CQueue::reset()
{
	front = 100 - 1;
	rear = 100 - 1;
}
bool CQueue::IsEmpty()
{
	if (front == rear)
	{
		return true;
	}
	return false;
}
bool CQueue::IsFull()
{
	if ((rear + 1) % 100 == front)
	{
		return true;
	}
	return false;
}
void CQueue::Enqueue(char tempC)
{
	rear = (rear + 1) % 100;
	data[rear] = tempC;
}
char CQueue::Front()
{
	return data[(front + 1) % 100];
}
void CQueue::Dequeue()
{
	front = (front + 1) % 100;

}