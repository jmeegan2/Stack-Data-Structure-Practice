/*
*Stack is a linear data structure which follows a particular order in which the operations are performed.The order may be LIFO(Last In First Out) or FILO(First In Last Out).

Mainly the following three basic operations are performed in the stack:

    Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
    Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
    Peek or Top: Returns top element of stack.
    isEmpty: Returns true if stack is empty, else false.
*/
/*
Real life example would be a stack of plates, the plate which is at the top
is the first one to be reomved, i.e. the plate which has been placed at the
bottommost position remains in the stack for the longest period of time. So, 
it can be simply seen to follow LIFO/FILO order*/
/* 
An application of a stack would be in Memory management any modern  computer 
uses stack as the primary-management for a running purpose.Each program that is 
running in a computer system has its own memory allocations
*/
/* 
When implementing a stack there are two ways to do it , you can do it using 
an array or using a linked list
*/

//C++ program to implement basic stack operations
#include <vector>
#include <iostream>

using namespace std;

#define MAX 1000

class Stack {
    int top;
public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();  //Returns top element of stack.
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;

    }
    else {

        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}

//Driver program to test above functions
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    //Print all elements in stack :
    cout << "\nElements in stack : ";
    while (!s.isEmpty())
    {
        //print top elements in stack 
        cout << s.peek() << " ";
        //remove top elements in stack 
        s.pop();
       
    }
     cout << endl;
    return 0;
}
//Just a simple data structure practice 