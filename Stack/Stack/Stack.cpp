#include "Stack.hpp"
#include <iostream>
using namespace std;
Stack::Stack() {
	//initial position in array 
	count = -1;
}

/*
	push - pushes an integer onto the stack
	Input~
	int value - an integer value we're pushing onto the stack
	return - success or failure boolean
*/
bool Stack::push(int value) {
	if (count == (MAX-1)) {
		cout << "Stack is full!" << endl;
		return false;
	}
	A[count] = value;
	count++;
	return true;
}

int Stack::pop() {
	if (count > 0) {
		//check if there are an elements on the stack
		count--;
		int popedVal = A[count];
		return popedVal;
	}
	cout << "no elements to pop off the stack" << endl;
	return -1;
}

int const Stack::top() {
	if (count >= 0) {
		return A[(count-1)];
	}
}

int const Stack::empty() {
	if (count == -1) {
		return true;
	}
	return false;
}

int const Stack::full() {
	if (count == (MAX - 1)) {
		return true;
	}
	return false;
}