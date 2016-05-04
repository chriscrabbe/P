#ifndef EXPRESSION_H
#define EXPRESSION_H


#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Expression // base class
{
private:
	string* infix;

public:
	Expression();	
	~Expression();
	/*string* setInfix(string* inInfix);
	string* showInfix(void);*/
	bool isOperator(char nvalue);
	
	


};
class Algorithm :public Expression
{
public:
	Algorithm();
	~Algorithm();
	string infixToPostfix(string infixx);
	int operatorPrescedence(char noperator);


private:


};







#endif 

