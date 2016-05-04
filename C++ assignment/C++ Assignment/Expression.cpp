#include"Expression.h"
#include"Stack.h"


Expression::Expression()
{
	infix = NULL; // default alocation just incase value is not wiped when program last used
}

Expression::~Expression()
{
}
//string* Expression::setInfix(string* inInfix)
//{
//	infix = inInfix;
//	return 0;
//}
//string* Expression::showInfix()
//{
//	return infix;
//}
bool Expression::isOperator(char nvalue)
{
	if (nvalue = '*' || '/' || '+' || '-')
	{
		return true;
	}
	else
	{
		return false;
	}
}

Algorithm::Algorithm()
{
}

Algorithm::~Algorithm()
{
}

int Algorithm::operatorPrescedence(char noperator)
{
	if ( noperator == '+'||'-')
	{
		return 1;
	}
	else if (noperator=='*'||'/')
	{
		return 2;
	}
}
string Algorithm::infixToPostfix(string infix)
{
	string postfix;
	stringstream temp;
	Stack* tstack = new Stack;
	
	for (int i = 0; i <= infix.length(); i++)
	{
		const char con = infix[i];
		if (isalnum(con))
		{
			temp << con;

		}
		else if ('(' == con)
		{
			tstack->SPush(con);
		}
		else if (')' ==con)
		{
			cout << tstack->STop() << endl;
			system("PAUSE");
			while (!tstack->isEmpty()&&tstack->STop() == !"(")
			{
				cout << tstack->STop() << endl;
				system("PAUSE");
				temp << tstack->SPop();
				
			}
			tstack->SPop();
			
		}
		else if (isOperator(con))
		{
			if (tstack->isEmpty())
			{
				tstack->SPush(con);
				
			}
			if ((operatorPrescedence(tstack->STop()) >= operatorPrescedence(con)) && isOperator(tstack->STop()) && (!'(' == tstack->STop()))
			{
				temp << tstack->SPop();
			}
		}
		
	}
	while (!tstack->isEmpty())
	{
		temp << tstack->SPop();
	}
	temp >> postfix;
	tstack->~Stack();
	return postfix;
}