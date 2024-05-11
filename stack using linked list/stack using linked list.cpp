// stack using linked list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//node class representing a single node in the linked list
class node {
public:
    int data;
    node* next;

    node() {
        next = NULL;
    }
};

//stack class
class stack {
private:
    node* top;      //pointer to the top node of the stack
};

int main()
{
    std::cout << "Hello World!\n";
}
