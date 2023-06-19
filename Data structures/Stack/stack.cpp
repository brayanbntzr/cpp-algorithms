#include <bits/stdc++.h>
#define Data int
#define MAX_SIZE 1000
/*
	Basic Stack
*/
class Stack{
	int top = -1;
	public:
		Data st[MAX_SIZE];

		// Push
		bool push(Data x){
			if(top+1 == MAX_SIZE)
				return false;
			else{
				st[top] = x;
				top++;
				return true;
			}
		}
		// Top
		Data top(){
			if(top > -1)
				return st[top];
		}
		// Pop
		void pop(){
			if(top > -1)
				top--;
		}
		// Size
		int size(){
			return top + 1;
		}
		// IsEmpty
		bool isEmpty(){
			if(top<0)
				return true;
			else
				return false;
		}
};