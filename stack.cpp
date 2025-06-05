#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// stack class
class Stack
{
private:
    Node *top; // Pointer to the node of the stack
public:
    Stack()
    {
        top = NULL; // Intilize the stack with a null top pointer
    }

    // Push operation: Insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new node
        newNode->data = value;      // 2. assign value
        newNode->next = top;        // 3. Set the next pointer of the new node to the current
        top = newNode;              // 4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    }

public:
    // IsEmpty operation: Check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer is NULL, indicating an empty stack
    }

    // Pop operation: Remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return; // If the stack is empty, print a massage and return
        }
    }

    // Peek/Top operation: Retrieve the value of the topmost element without removing it
    void peek()
    {
        if (isEmpty())
        {
            cout << "List is Empty." << endl;
            return; // If the stack is empty, print a massage and return
        }
        else
        {
            Node *current = top;
            while ((current != NULL))
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // Return teh value of the top node
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1.Push\n";
        cout << "2.Pop\n";
        cout << "3.Peek\n";
        cout << "4.Exit\n";
        cout << "Enter your choice";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push";
            cin >> value;
            stack.push(value); // Push the entered value onto the stack
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }

        cout << endl;
    }

    return;
}