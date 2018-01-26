#include "Stack.hpp"
#include <iostream>
using namespace std;
Stack::Stack() {
	//initial position in array 
	count = 0;
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