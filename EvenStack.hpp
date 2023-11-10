//
//  EvenStack.hpp
//  Project 4 prac 2
//
//  Created by Nicholas Florio on 11/2/23.
//
#ifndef EvenStack_h
#define EvenStack_h

#include <stack>

class EvenStack {
private:
    std::stack<int> stack;

public:
    EvenStack();

    // Check if the stack is empty
    bool empty() const;

    // Return the size of the stack
    int size() const;

    // Return the top element of the stack
    int top() const;

    // Push even integer values onto the stack
    void push(int value);

    // Pop the top element from the stack
    void pop();

    // Push all even numbers from an input stack onto this stack
    void getEvenNumbers(std::stack<int>& inputStack);

    // Pop and output each element on the stack
    void emptyStack();
};

#endif /* EvenStack_h */
