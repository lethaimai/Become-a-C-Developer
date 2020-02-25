#include <iostream>
#include <vector>
#include <array>

using namespace std;

// Declare functions
struct Node
{
    int data;
    Node* next;

};
typedef Node* nodePtr;
void insertNode(nodePtr& head, int value);
void deleteNode(nodePtr&head, int valDelete);

// Main
int main()
{
    nodePtr head;
    head= new Node;
    head->data= 50;
    head->next= NULL;

    insertNode(head, 40);
    insertNode(head, 30);
    insertNode(head, 20);
    insertNode(head, 10);
    insertNode(head, 5);

    deleteNode(head, 5);
    deleteNode(head, 30);

    // Print all nodes value in the link list
    nodePtr temp= head;
    while (temp!= NULL)
    {
        std::cout << temp->data << endl;
        temp= temp->next;
    }
    


    


    return 0;
}

// Define functions
void insertNode(nodePtr& head, int value)
{
    nodePtr nodeTemp;
    nodeTemp= new Node;
    nodeTemp->data= value;
    nodeTemp->next= head;

    head= nodeTemp;
}


void deleteNode(nodePtr&head, int valDelete)
{
    // If the head is deleted node
    if (head->data== valDelete)
    {
        nodePtr temp= head;
        head= temp->next;
    }
    else
    {
        nodePtr temp= head;
        nodePtr curr= head;

        while (curr!= NULL && curr->data!= valDelete)
        {
            temp= curr;
            curr= curr->next;
        }
        if (curr==NULL)
        {
            std::cout<< "This value does not exist in the list\n";
        }
        else
        {
            temp->next= curr->next;
            delete curr;
        }
    }
    
}
