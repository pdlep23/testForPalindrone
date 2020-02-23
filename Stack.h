#pragma once
class CStack
{
public:
	CStack();//Constructor
	bool IsEmpty();//check if the stack is empty
	bool IsFull();//check if the stack is full
	void Push(char d);//push a char into the stack
	void Pop();//pop or remove from the stack
	char Top();//reveal the top char of the stack
	void reset();
private:
	int top;//the number of the stack, -1 to 19
	char data[100];//the stack of characters

};

