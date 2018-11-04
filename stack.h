#include<iostream>
#ifndef stack_H_
#define stack_H_
class Stack{
	
	private :  char* data_;
	          int top_;
	          
	public :
	          Stack();
	         ~Stack();
	         int empty();
	         void push(char x);
	         void pop();
	         char top();
};
#endif



