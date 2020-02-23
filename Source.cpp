#include <iostream>
#include "Queue.h"
#include "Stack.h"
#include <string.h>
using namespace std;
bool testForQuit(char[]);
bool isPalindrome(CStack, CQueue);
int main()
{
	char input[100];

	CStack tempS;
	CQueue tempQ;
	bool exit = false;
	do
	{
		cout << "Please enter a string to test for palindrome or type QUIT to exit: ";
		cin.getline(input, 100);
		exit = testForQuit(input);
		if (exit == false)
		{
			cout << input << endl;
			int length = strlen(input);
			for (int i = 0; i < length; i++)
			{
				if (isalpha(input[i]))
				{
					tempS.Push(tolower(input[i]));
					tempQ.Enqueue(tolower(input[i]));
				}
			}
			if (isPalindrome(tempS, tempQ) == true)
				cout << "The input is a palindrome." << endl;
			else
				cout << "The input is not a palindrome." << endl;
		}
		tempS.reset();
		tempQ.reset();
	} while (exit == false);

	return 0;
}

bool isPalindrome(CStack tStack, CQueue tQueue)
{
	while (tStack.IsEmpty() == false)
	{
		if (tStack.Top() != tQueue.Front())
		{
			return false;
		}
		tStack.Pop();
		tQueue.Dequeue();
	}
	return true;
}

bool testForQuit(char userInput[])
{
	char quitTest[4] = { 'q', 'u', 'i', 't' };
	bool tQuit = true;
	if (strlen(userInput) == 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (quitTest[i] != tolower(userInput[i]))
			{
				tQuit = false;
			}
		}

	}
	else
		tQuit = false;
	return tQuit;
}