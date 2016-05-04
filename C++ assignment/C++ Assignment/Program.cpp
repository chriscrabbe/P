// AssginmmentC++ Program.cpp
#include <iostream>
#include <string>
#include"Expression.h"
#include"Stack.h"


using namespace std;

int main()
{

	string infix;
	cout << "Please enter a infix expression: " << endl;
	Algorithm* algo = new Algorithm;
	cin >> infix;
	cout << "The expression has been rearranged as : " << algo->infixToPostfix(infix) << endl;
	system("PAUSE");
	return 0;
}



