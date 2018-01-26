#pragma once
class Stack {
	public:
		Stack();
		bool push(int);

	private: 
		const static int MAX = 10;
		int A[MAX];
		int count;
		
};
