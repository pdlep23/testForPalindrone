#pragma once


class CQueue {
private:
	int front;
	int rear;
	char data[100];
	
public:
	CQueue();
	bool IsEmpty();
	bool IsFull();
	void Enqueue(char);
	char Front();
	void Dequeue();
	void reset();
};

