#pragma once
class Stack {
	public:
		Stack();
		bool push(int);
		int pop();
		int const top();
		int const empty();
		int const full();
		int const print();
		
	private: 
		const static int MAX = 10;
		int A[MAX];
		int count;
		
};
