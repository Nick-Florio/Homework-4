//
//  EvenStack.cpp
//  Project 4 
//
//  Created by Nicholas Florio on 11/2/23.
//
// EvenStack.cpp
#include "EvenStack.hpp"
#include <iostream>

EvenStack::EvenStack() {}

bool EvenStack::empty() const {
    return stack.empty();
}

int EvenStack::size() const {
    return stack.size();
}

int EvenStack::top() const {
    if (!stack.empty()) {
        return stack.top();
    } else {
        throw std::runtime_error("Stack is empty");
    }
}

void EvenStack::push(int value) {
    if (value % 2 == 0) {
        stack.push(value);
    }
    else {
        std::cout << "Error - can only push even numbers" << std::endl;
    }
}

void EvenStack::pop() {
    if (!stack.empty()) {
        stack.pop();
    }
}

void EvenStack::getEvenNumbers(std::stack<int>& inputStack) {
    std::stack<int> tempStack;
    std::stack<int> filteredStack;
    
    while (!inputStack.empty()) {
        int value = inputStack.top();
        inputStack.pop();
        if (value % 2 == 0) {
            // stack.push(value);
            // Add to filteredStack instead
            filteredStack.push(value);
        }
        tempStack.push(value); // Preserve original order in temp stack
    }

    // Restore the original order in the input stack
    while (!tempStack.empty()) {
        inputStack.push(tempStack.top());
        tempStack.pop();
    }
    
    // Move elements from filteredStack to the stack
    while(!filteredStack.empty()) {
        stack.push(filteredStack.top());
        filteredStack.pop();
    }
}

void EvenStack::emptyStack() {
    std::cout << "Removing the following:  ";
    while (!stack.empty()) {
        int value = stack.top();
        stack.pop();
        std::cout << value << " ";
    }
    std::cout << std::endl;
}
