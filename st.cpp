#include<iostream>
#include"stack.h"
#include"stack.cpp"
using namespace std;

int main()
{
	Stack s;
	char str[10]="ABCDE";
	for(int i=0;i<5;++i)
	s.push(str[i]);
	while(!s.empty())
	{cout<<s.top();s.pop();	}
	     return 0;
}
