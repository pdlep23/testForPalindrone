#include "Stack.h"
#include <iostream>
CStack::CStack()//Constructor
{
	top = -1;//stack starts -1 which means empty

}

void CStack::reset()
{
	top = -1;
}
bool CStack::IsEmpty() //test if stack is empty
{
	if (top == 0)// pulls the top number if -1 it is empty
	{
		return true; //return true since -1 == empty
	}
	return false;
}

bool CStack::IsFull()//checks if the top is full
{
	if (top == 100 - 1)// if top equals 19 that means 20 are in the stack and it is full
	{
		return true;
	}
	return false;
}

void CStack::Push(char d)// push into stack
{
	if (IsFull() == false)//if stack is full we cannot push into stack
	{
		++top;//increase top by 1
		data[top] = d;// new char gets push into stack
	}
	
		//std::cout << "Stack is full";//lets us know that it is full
}

void CStack::Pop()//removing one from the stack
{
	if (IsEmpty() == false)//if empty nothing to pop off
	{
		--top; //decreases the value of the top
	}
	//lets us know that the stack is empty
		//std::cout << "Stack is empty";
}

char CStack::Top()//shows the top char in the stack
{
	return data[top];
}
