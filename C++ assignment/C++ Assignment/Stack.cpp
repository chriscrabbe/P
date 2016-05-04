#include "Stack.h"
StackNode::StackNode()
{
	input = NULL;
	next = NULL;
}

StackNode::StackNode(char inputt)
{
	input = new char(inputt);
	next = NULL;
}

StackNode* StackNode::getNext()
{
	return next;
}

void StackNode::setNext(StackNode* nextNode)
{
	next = nextNode;
}

char* StackNode::getInput()
{
	return input;
}
StackNode::~StackNode()
{
}

Stack::Stack()
{
	start = NULL;
}

void Stack::SPush(char inputt)
{
	if (!isEmpty())
	{
		StackNode* current;
		current = new StackNode(inputt);  // allocate memory
		start = current;               // change start 
	}
	else
	{
		StackNode* current;
		current = start;
		start = new StackNode(inputt);
		start->setNext(current);
	}
}

char Stack::SPop()
{
	StackNode *temp;
	temp = start;
	start = start->getNext();
	return *temp->getInput();
	delete temp;
}

char Stack::STop()
{
	return *start->getInput();
}

bool Stack::isEmpty()
{
	return start == NULL;
}
Stack::~Stack()
{
}
