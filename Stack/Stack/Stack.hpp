#pragma once
#include <iostream> 
using namespace std;

class Stack {
	public:
		Stack();
		bool push(int);
		int pop();
		int const top();
		int const empty();
		int const full();
		void const print();
		int * getStack();
		int getCount();
		friend ostream& operator<<(ostream& os, const Stack &obj);
	private: 
		static constexpr int MAX = 10;
		int A[MAX];
		int count;
	
};


