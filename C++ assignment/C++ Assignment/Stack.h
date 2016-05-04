#ifndef STACK_H
#define STACK_H


#include <string>
//#include <stack>
#include <iostream>
//#include <list>

using namespace std;


class StackNode
{
private:
	char* input;
	StackNode* next;
public:
	StackNode();
	StackNode(char inputt);
	StackNode* getNext();
	void setNext(StackNode* nextNode);
	char* getInput();
	~StackNode();
};



class Stack
{
public:
	Stack();
	~Stack();
	void SPush(char in);
	char SPop();
	char STop();
	bool isEmpty();
	


private:
	StackNode *start;


};

#endif 

